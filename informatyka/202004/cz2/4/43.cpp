#include <bits/stdc++.h>

using namespace std;

int main() {

    // ===============
    //
    // O(n) = 2*n^2, yey!
    //
    // ===============

    fstream file("dane4.txt"); int n = 1000;
    //fstream file("danetest.txt"); int n = 13;
    //fstream file("danetest2.txt"); int n = 13;

    int tab[n] = { 0 };
    for (int i = 0; i < n; i++) file >> tab[i];
    int tr[n-1] = { 0 };        // array of abs(differences)
    for (int i = 1; i < n; i++) tr[i-1] = abs(tab[i]-tab[i-1]);

    //for (int i = 0; i < n-1; i++) cout << tr[i] << " ";

    int maxlnum = 0;
    for (int i = 0; i < n-1; i++) {

        int curlnum = 0;

        for (int j = 0; j < n-1; j++) {

            if (tr[i] == tr[j]) curlnum++;

        }

        maxlnum = max(maxlnum, curlnum);

    }

    cout << maxlnum << endl;

    for (int i = 0; i < n-1; i++) {

        int curlnum = 0;

        for (int j = 0; j < n-1; j++) {

            if (tr[i] == tr[j]) {

                curlnum++;

                if(i != j) tr[j] = 0;      // slowly destroy the array leaving the first occurance

            }

        }

        if (curlnum == maxlnum) {

            cout << tr[i] << " ";

        }

    }

    return 0;
}
