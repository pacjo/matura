#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("mecz.txt"); int n = 10000;
    //fstream file("mecz_przyklad.txt"); int n = 10000;

    string game; file >> game;

    int w = 0;
    for (int i = 1; i < n; i++) {

        if (game[i-1] != game[i]) w++;

    }

    cout << w << endl;

    return 0;
}
