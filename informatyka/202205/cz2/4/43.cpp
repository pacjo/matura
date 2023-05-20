#include <bits\stdc++.h>

using namespace std;

int main() {

    fstream file("liczby.txt"); int n = 200; // <10, 100000>
    //fstream file("przyklad.txt"); int n = 200;

    int tab[n] = { 0 };

    for (int i = 0; i < n; i++) file >> tab[i];

    int w = 0;      // trojki
    int u = 0;         // piatki

    for (int i = 0; i < n; i++) {

        int w1 = tab[i];

        for (int j = 0; j < n; j++) {

            if (i != j) {

                int w2 = tab[j];
                if (w2 % w1 == 0) {

                    for (int k = 0; k < n; k++) {

                        if (k != i && k != j) {

                            int w3 = tab[k];
                            if (w3 % w2 == 0) {

                                w++;
                                cout << w1 << " " << w2 << " " << w3 << endl;

                                // that's enough for trojki
                                // below code for piatki

                                for (int l = 0; l < n; l++) {

                                    if (l != i && l != j && l != k) {

                                        int w4 = tab[l];
                                        if (w4 % w3 == 0) {

                                            for (int m = 0; m < n; m++) {

                                                if (m != i && m != j && m != k &&m != l) {

                                                    int w5 = tab[m];

                                                    if(w5  % w4 ==0) u++;

                                                }

                                            }

                                        }

                                    }

                                }

                            }

                        }

                    }

                }

            }

        }

    }

    cout << w << endl;
    cout << u << endl;

    return 0;

}
