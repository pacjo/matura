#include <bits/stdc++.h>

using namespace std;

int nwd(int a, int b) {

    while (b > 0) {

        int r = a % b;
        a = b;
        b = r;

    }

    return a;

}

int main() {

    int n, w; cin >> n >> w;
    // cin >> w <=> w = a1

    for (int i = 0; i < n - 1; i++) {

        int a; cin >> a;
        w = nwd(w, a);

    }

    cout << w << endl;

    return 0;
}
