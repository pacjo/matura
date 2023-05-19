#include <bits/stdc++.h>

using namespace std;

int main() {

    int tab_size = 150000;
    bool tab[tab_size];
    fill_n(tab, tab_size, false);
    for (int i = 3; i < tab_size; i=i*3) tab[i] = true;

    // yea, I forgot this one:
    tab[1] = true;      // (3^0 = 1)

    //for (int i = 0; i < 32; i++) cout << tab[i] << " ";

    fstream file("liczby.txt"); int n = 500;
    //fstream file("przyklad.txt"); int n = 500;

    int w = 0;
    for (int i = 0; i < n; i++) {

        int temp; file >> temp;

        if (tab[temp]) w++;

    }

    cout << w << endl;

    return 0;
}
