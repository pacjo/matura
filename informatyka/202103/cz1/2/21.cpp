#include <bits/stdc++.h>

using namespace std;

int algo(int n) {

    if (n <= 2) return 1;
    else {

        int p = 1, k = n;

        while (k-p > 1) {

            int s = (p+k)/2;

            if (s*s <= n) {

                p = s;

            } else {

                k = s;

            }

        }

        return p;

    }

}

int main() {

    int n; cin >> n;

    cout << algo(n) << endl;

    return 0;
}
