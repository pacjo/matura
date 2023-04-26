#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;

    int p[n+1];
    int s[n+1];

    for (int i = 1; i <= n; i++) {

        p[i] = 1;
        s[i] = 0;

    }

    for (int j = 2; j <= n; j++) {

        if (p[j] == 1) {

            int i = j*j;
            while (i <= n) {

                p[i] = 0;
                i += j;

            }

        }

        s[j] = s[j-1] + p[j];

    }

    for (int i = 1; i <= n; i++) cout << p[i] << " ";
    cout << endl;
    for (int i = 1; i <= n; i++) cout << s[i] << " ";

    return 0;
}
