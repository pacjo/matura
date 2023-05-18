#include <bits/stdc++.h>

using namespace std;

int main() {

    string en; cin >> en;
    int k, n = en.size(); cin >> k;

    int p = n / k;

    /*string dc = "";

    for (int i = 0; i < n; i++) {

        cout << en[(p*i)%n + (p*i)/n] << " ";
        //dc += en[(p*i)%n + (p*i)/n];

        if ((i/3)%2 == 0) dc += en[(p*i)%n + (p*i)/n];
        if ((i/3)%2 != 0) dc += en[-(p*i)%n + 2*(p*i)/n];

    }

    cout << dc << endl;*/

    // fuck it, let's put it into array

    char tab[k][p];

    for (int i = 0; i < n; i++) tab[i/p][i%p] = en[i];

    /*for (int i = 0; i < k; i++) {

        for (int j = 0; j < p; j++) cout << tab[i][j] << " ";
        cout << endl;

    }*/

    for (int i = 0; i < n; i++) {


        if ((i/k)%2 == 0) cout << tab[i%k][i/k];
        if ((i/k)%2 != 0) cout << tab[k-(i%k)-1][i/k];

    }

    return 0;
}
