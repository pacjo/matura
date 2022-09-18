#include <bits/stdc++.h>

using namespace std;

int fun(int n) {

    if (n == 1) return 2;
    else {

        if (n % 2 == 0) return fun(n - 1) + 2;
        else return fun(n - 1) * 2;

    }

}

int main() {

    int n; cin >> n;

    cout << fun(n) << endl;

    return 0;
}
