#include <bits/stdc++.h>

using namespace std;

// slight fix: return n-th element
//  1  1  2  3  5  8  13  21  34  55

int fun(int n) {

    if (n == 1) return 1;
    else if (n == 2) return 1;
    else return fun(n - 1) + fun(n - 2);

}

int main() {

    int n; cin >> n;

    cout << fun(n) << endl;

    return 0;
}
