#include <bits/stdc++.h>

using namespace std;

bool is_operator(char input) {

    return (input == '+' || input == '-' ||
            input == '*' || input == '/' ||
            input == '^' ||
            input == '(' || input == ')');

}

int precedence(char input) {

    if (input == '^') return 3;
    else if (input == '*' || input == '/') return 2;
    else if (input == '+' || input == '-') return 1;

    else return -1;     // cause we could get precedence of '(' or ')'

}

int main() {        // only single characters (sure...)

    //string infix = "5+3";
    string infix; getline(cin, infix);

    string postfix = "";
    stack <char> st;

    for (int i = 0; i < infix.size(); i++) {

        if (!is_operator(infix[i])) postfix += infix[i];     // add operands to output
        else {

            if (infix[i] == '(') st.push(infix[i]);
            else if (infix[i] == ')') {

                while (st.top() != '(') {

                    postfix += st.top();
                    st.pop();

                }

                st.pop();     // pop starting '('

            } else {

                while (!st.empty() && precedence(infix[i]) <= precedence(st.top())) {

                    postfix += st.top();
                    st.pop();

                }

                st.push(infix[i]);

            }

        }

    }

    while (!st.empty()) {

        postfix += st.top();
        st.pop();

    }

    cout << postfix << endl;

    return 0;

}
