#include <bits/stdc++.h>

using namespace std;

int SumaKwCyfr(int n) {

    int w = 0;
    while (n > 0) {

        w += (n%10)*(n%10);
        n = n / 10;

    }

    return w;

}

int main() {

    // z zadania
    // max liczba 3 cyfrowa (bo < 1000)
    // max SumaKwCyfr liczby 3 cyfrowej to 243

    int tabsize = 250;
    int tab[tabsize] = { 0 };

    int n = 0; cin >> n;

    int counter = 0;
    while ((n > 1 && tab[n] != 1) && counter < 20) {      // oba warunki: nudna i ciekawa

        //cout << n << " " << SumaKwCyfr(n) << endl;

        tab[n] = 1;
        n = SumaKwCyfr(n);

        counter++;

    }

    //for (int i = 0; i < tabsize; i++) cout << tab[i] << " ";

    if (SumaKwCyfr(n) == 1) cout << "nudna" << endl;
    if (tab[SumaKwCyfr(n)] == 1) cout << "ciekawa" << endl;


    return 0;
}
