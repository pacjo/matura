#include <bits/stdc++.h>

using namespace std;

void rysuj(int x, int n) {

    if (2*x <= n) {

        cout << "strzalka: " << x << "->" << 2*x << "|" << endl;
        rysuj(2*x, n);

    }

    if ((2*x)+1 <= n) {

        cout << "strzalka: " << x << "->" << (2*x)+1 << "|" << endl;
        rysuj((2*x)+1, n);

        if((2*x)+1 == 5) return;

    }

}

int main() {

    int x, n; cin >> x >> n;

    rysuj(x, n);

    return 0;
}
