#include <bits/stdc++.h>

using namespace std;

bool is_operand(char in) {

    return ((in >= '0' && in <= '9') || (in >= 'a' && in <= 'z'));

}

int main() {        // only single characters (sure...)

    // b*(c+d)
    //string postfix = "235-3*-";       // test
    string postfix; getline(cin, postfix);

    stack <int> st;

    int value = 0;
    for (int i = 0; i < postfix.size(); i++) {

        if (is_operand(postfix[i])) {

            st.push(postfix[i] - 48);
            //cout << st.top() << " ";

        }
        else if (postfix[i] == '+') {

            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            //cout << a << "  " << b << ": " << b+a << endl;
            st.push(b + a);

        } else if (postfix[i] == '-') {

            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            //cout << a << "  " << b << ": " << b-a <<  endl;
            st.push(b - a);

        } else if (postfix[i] == '*') {

            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            //cout << a << "  " << b << ": " << b*a <<  endl;
            st.push(b * a);

        } else if (postfix[i] == '/') {

            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            //cout << a << "  " << b << ": " << b/a <<  endl;
            st.push(b / a);

        }

    }

    cout << st.top() << endl;

    return 0;

}
