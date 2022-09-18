#include <bits/stdc++.h>

using namespace std;

void fun(int n, int c) {

    if (c < n) {

        int a; cin >> a;
        fun(n, c + 1);
        cout << a << " ";

    }

}

int main() {

    int n; cin >> n;

    fun(n, 0);

    return 0;
}
