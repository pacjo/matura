#include <bits/stdc++.h>

using namespace std;

bool is_operand(char in) {

    return ((in >= '0' && in <= '9') || (in >= 'a' && in <= 'z') || (in >= 'A' && in <= 'Z'));

}

int precedence(char in) {

    if (in == '+' || in == '-') return 1
    else if (in == '*' || in == '/') return 2
    else if (in == '^') return 3

}

int main() {        // only single characters (sure...)

    string infix = "A+B";       // test
    //string infix; getline(cin, infix);

    stack <char> st;

    string postfix = "";
    for (int i = 0; i < infix.size(); i++) {

        if (is_operand(infix[i])) {     // char is an operand

            postfix += infix[i];

        } else if (infix[i] == '(') {

            st.push('(');

        } else if (infix[i] == ')') {

            while (!st.empty() || st.top() != ')') {

                postfix += st.top();
                st.pop();

            }
            st.pop() // remove first '('

        } else {

            if (st.empty()) st.push(infix[i]);
            else {      // stack is not empty and with have a normal operand

                if (precedence(infix[i]) >= st.top()) st.push(infix[i]);
                else {      //https://www.youtube.com/watch?v=dJESbyFR1sU --> 4.2.coœ ?????



                }

            }


        }

    }

    cout << st.top() << endl;

    return 0;

}
