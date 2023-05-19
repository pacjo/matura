#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("liczby.txt"); int n = 500;
    //fstream file("przyklad.txt"); int n = 500;

    int tab[n] = { 0 };
    for (int i = 0; i < n; i++) file >> tab[i];

    int maxlen = 0;
    int maxlenfirst = 0;
    int maxlennwd = 0;
    for (int i = 0; i < n; i++) {

        int len = 2;
        int last_nwd = __gcd(tab[i], tab[i+1]);

        for (int j = i+2; j < n; j++) {

            //cout << tab[i] << " " << tab[j-1] << " " << tab[j] << " - " << last_nwd << " " << __gcd(last_nwd, tab[j]) << endl;

            if (__gcd(last_nwd, tab[j]) <= 1) break;

            int temp = last_nwd;
            last_nwd = __gcd(last_nwd, tab[j]);

            len++;

            if (len>maxlen) {

                maxlen = len;
                maxlenfirst = tab[i];
                maxlennwd = temp; //__gcd(tab[i], tab[i+1]), also no // cause we overwrote last_nwd

            }

        }

    }

    cout << maxlenfirst << " " << maxlen << " " << maxlennwd << endl;

    return 0;
}
