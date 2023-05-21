#include <bits\stdc++.h>

using namespace std;

int main() {

    fstream file("instrukcje.txt"); int n = 2000;
    //fstream file("przyklad.txt"); int n = 20;

    int tab[30] = { 0 };

    for (int i = 0; i < n; i++) {

        string inst; char val;
        file >> inst >> val;

        if (inst == "DOPISZ") {

            //cout << int(val) << endl;
            tab[val-65]++;

        }

    }

    int maxnum = 0, maxid = 0;
    for (int i = 0; i < 30; i++) {

        //cout << tab[i] << " ";
        if (tab[i] > maxnum) {

            maxnum = tab[i];
            maxid = i;

        }

    }

    cout << char(65+maxid) << " " << maxnum << endl;

    return 0;
}
