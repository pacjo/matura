#include <bits/stdc++.h>

using namespace std;

long long int silnia(int n) {

    if (n == 0) return 1;
    //if (n == 1) return 1;
    else return n * silnia(n-1);

}

long long int silnia_cyfr(int n) {

    string sn = to_string(n);
    int w = 0;
    for (int i = 0; i < sn.size(); i++) w+=silnia(sn[i]-48);

    return w;

}

int main() {

    //cout << silnia_cyfr(145) << endl;

    int tab_size = 150000;
    bool tab[tab_size];
    fill_n(tab, tab_size, false);
    for (int i = 3; i < tab_size; i=i*3) tab[i] = true;

    // yea, I forgot this one:
    tab[1] = true;      // (3^0 = 1)

    //for (int i = 0; i < 32; i++) cout << tab[i] << " ";

    fstream file("liczby.txt"); int n = 500;
    //fstream file("przyklad.txt"); int n = 500;

    for (int i = 0; i < n; i++) {

        int temp; file >> temp;

        if (temp == silnia_cyfr(temp)) cout << temp << endl;

    }

    return 0;
}
