#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("liczby_con.txt"); int n = 100;
    //fstream file("liczby_przyklad_con.txt"); int n = 100;

    int tab[200] = { 0 };

    for (int i = 0; i < n; i++) {

        string temp; file >> temp;

        for (int j = 0; j < temp.size(); j++) {

            tab[int(temp[j])]++;

        }

    }

    for (int i = 0; i < 200; i++) {

        if (i >= int('0') && i <= int('9')) {

            cout << char(i) << ":" << tab[i] << endl;

        }

        if (i >= int('a') && i <= int('f')) {

            cout << char(i-(int('a')-int('A'))) << ":" << tab[i] << endl;

        }

    }

    return 0;
}
