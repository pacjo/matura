#include <bits/stdc++.h>

using namespace std;

int algo(int n) {

    if (n <= 2) return 0;
    else {

        int w = 0;

        int p = 1, k = n;

        while (k-p > 1) {

            int s = (p+k)/2;
            w++;

            if (s*s <= n) {

                p = s;

            } else {

                k = s;

            }

        }

        return w;

    }

}

int main() {

    int n; cin >> n;

    cout << algo(n) << endl;

    return 0;
}
