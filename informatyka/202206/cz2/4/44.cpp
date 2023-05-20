#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("liczby.txt"); int n = 100;
    //fstream file("przyklad.txt"); int n = 11;

    int tabsize = 10000;
    int tab[tabsize] = { 0 };

    for (int i = 0; i < n; i++) {

        int temp; file >> temp;

        tab[temp]++;

    }

    int w1 = 0, w2 = 0, w3 = 0;
    for (int i = 0; i < tabsize; i++) {

        if (tab[i] == 1) w1++;
        else if (tab[i] == 2) w2++;
        else if (tab[i] == 3) w3++;


    }

    // w1+w2+w3 is there because you have to print all numbers given instead of those only given n times
    cout << (w1+w2+w3) << " " << w2 << " " << w3 << endl;

    return 0;
}
