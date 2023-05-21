#include <bits/stdc++.h>

using namespace std;

void rysuj(int x, int n) {

    if (2*x <= n) {

        //cout << "strzalka: " << x << "->" << 2*x << endl;
        cout << 1;
        rysuj(2*x, n);

    }

    if ((2*x)+1 <= n) {

        //cout << "strzalka: " << x << "->" << (2*x)+1 << endl;
        cout << 1;
        rysuj((2*x)+1, n);

    }

}

int main() {

    int x, n; cin >> x >> n;

    rysuj(x, n);

    cout << endl<< "take above output, paste here and press enter: " << endl;
    string temp;
    cin >> temp;
    cout << "number of runs: " << temp.size() << endl;

    return 0;
}
