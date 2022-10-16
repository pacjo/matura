#include <bits/stdc++.h>

using namespace std;

int fun(int n) {

    if (n == 1) return 1;
    else return fun(n - 1) + n;

}

int main() {

    int n; cin >> n;

    cout << fun(n) << endl;

    return 0;
}
