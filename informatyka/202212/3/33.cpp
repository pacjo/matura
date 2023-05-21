#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {

    if (n == 0 || n == 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {

        if (n % i == 0) return false;

    }

    return true;

}

int main() {

    fstream file("liczby.txt"); int n = 100;
    //fstream file("liczby_przyklad.txt"); int n = 100;

    int maxrval, minrval;
    int maxr = 0;
    int minr = INT_MAX;

    for (int i = 0; i < n; i++) {

        int temp; file >> temp;
        int w = 0;

        cout << temp << " - ";

        for (int j = 1; j <= temp; j++) {

            if (is_prime(j)) {

                for (int k = 1; k <= temp / 2; k++) {

                    if (is_prime(k)) {

                        if (j + k == temp) {

                             //cout << j << " " << k << endl;
                             w++;
                             break;

                        }

                    }

                }

            }

        }

        if (w > maxr) {

            maxr = w;
            maxrval = temp;

        }

        if (w < minr) {

            minr = w;
            minrval = temp;

        }

        cout << w << endl;

    }

    cout << maxrval << " " << maxr << " "
         << minrval << " " << minr << endl;

    return 0;
}
