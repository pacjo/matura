#include <bits/stdc++.h>

using namespace std;

bool is_operator(char input) {

    return (input == '+' || input == '-' || input == '*' || input == '/');

}

int main() {        // only single characters (sure...)

    //string postfix = "531*+";       // test 531*+ -> 5 + 3 * 1 = 5 + 3 = 8
    string postfix; getline(cin, postfix);

    stack <int> st;

    for (int i = 0; i < postfix.size(); i++) {

        if (!is_operator(postfix[i])) st.push((int)postfix[i] - 48);      // if it's an operand => push to stack (also substract 48, cause 'char')
        else {

            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            if (postfix[i] == '+') st.push(b+a);
            else if (postfix[i] == '-') st.push(b-a);
            else if (postfix[i] == '*') st.push(b*a);
            else if (postfix[i] == '/') st.push(b/a);

        }

    }

    cout << st.top() << endl;

    return 0;

}
