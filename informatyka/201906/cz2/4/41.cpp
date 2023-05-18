#include <bits/stdc++.h>

using namespace std;

void erastotenes(bool* arr, int n) {

    for (int i = 2; i < n; i++) {

        for (int j = 2*i; j < n; j+=i) arr[j] = false;

    }

}

int main() {

    int tab_size = 10000;
    bool tab[tab_size];
    fill_n(tab, tab_size, true);
    erastotenes(tab, tab_size);

    //for (int i = 0; i < 25; i++) cout << tab[i] << " ";

    fstream liczby("liczby.txt"); int n = 300;
    fstream pierwsze("pierwsze.txt"); int m = 200;
    //fstream liczby("liczby_przyklad.txt"); int n = 50;
    //fstream pierwsze("pierwsze_przyklad.txt"); int m = 50;

    for (int i = 0; i < n; i++) {

        int num; liczby >> num;

        if (num >= 100 && num <= 5000 && tab[num]) cout << num << endl;

    }

    return 0;
}
