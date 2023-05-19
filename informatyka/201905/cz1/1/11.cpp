#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 10;
    int tab[n] =  {5, 99, 3, 7, 111, 13, 4, 24, 4, 8};

    for (int i = 0; i < n; i++) {

        if(tab[i] % 2 == 0) {

            cout << tab[i] << endl;
            break;

        }

    }

    return 0;
}
