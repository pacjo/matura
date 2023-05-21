#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("mecz.txt"); int n = 10000;
    //fstream file("mecz_przyklad.txt"); int n = 10000;

    string game; file >> game;

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {

        if (game[i] == 'A') a++;
        else b++;

        if ((a >= 1000 || b >= 1000) && abs(a-b) >= 3) {        // jest mozliwosc na koniec seta

            if (a > b) cout << "A ";
            if (b > a) cout << "B ";

            cout << a << ":" << b << endl;

            break;      // bo tylko pierwszy set

        }

    }

    return 0;
}
