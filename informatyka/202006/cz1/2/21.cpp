#include <bits/stdc++.h>

using namespace std;

void sym(int a, int b) {

    if (a != 0) {

        sym(a-1, b+1);
        cout << a*b << " ";
        sym(a-1, b+1);

    }

}

int main() {

    int a, b; cin >> a >> b;

    sym(a, b);

    return 0;
}
