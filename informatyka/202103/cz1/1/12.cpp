#include <bits/stdc++.h>

using namespace std;

string to_bin(int n, int k) {

    string out = "";
    for (int i = 0; i < k; i++) out += '0';

    int p = 0;
    while (n > 0) {

        out[k-1-p] = (n % 2) + 48;
        n = n / 2;
        p++;

    }

    return out;

}

int main() {

    int k, x, y; cin >> k >> x >> y;

    string sx = to_bin(x, k);
    string sy = to_bin(y, k);
    //cout << sx << endl << sy << endl;

    int w = k, i = 0;

    while (sx[i] == sy[i]) {

        w--;
        i++;

    }

    cout << w << endl;

    return 0;
}
