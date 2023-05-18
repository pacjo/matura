#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("dane4.txt"); int n = 1000;
    //fstream file("danetest.txt"); int n = 13;

    int tab[n] = { 0 };
    for (int i = 0; i < n; i++) file >> tab[i];

    int maxlen = 0;
    int curlen = 1;

    int stopnum = 0;
    int sni = 0;

    for (int i = 2; i < n; i++) {

        if (abs(tab[i]-tab[i-1]) != abs(tab[i-1]-tab[i-2])) {

            curlen = 1;

        } else {

            curlen++;
            //maxlen = max(maxlen, curlen);
            if (curlen > maxlen) {

                maxlen = curlen;
                stopnum = tab[i];
                sni = i;

            }

        }

    }

    cout << (maxlen+1) << endl;     // cause maxlen is a number of gaps and the number of numbers is one larger
    cout << tab[sni-maxlen] << " " << stopnum << endl;      // hey, it works!

    return 0;
}
