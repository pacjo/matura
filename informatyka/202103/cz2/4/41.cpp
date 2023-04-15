#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("galerie.txt"); int n = 50;
    //fstream file("galerie_przyklad.txt"); int n = 10;

    string country[n];
    fill_n(country, n, "");
    int counter[n] = {0};

    for (int i = 0; i < n; i++) {

        string temp;
        getline(file, temp);

        string ccode = temp.substr(0, temp.find(" "));
        //cout << ccode << endl;

        for (int j = 0; j < n; j++) {

            if (country[j] == "") {

                country[j] = ccode;
                counter[j]++;
                break;

            } else if (country[j] == ccode) {

                counter[j]++;
                break;

            } else {

                continue;
                //cout << "WHAT A TERRIBLE FAILURE! " << ccode << endl;

            }

        }

    }

    int i = 0;
    while (i < n && country[i] != "") {

        cout << country[i] << " " << counter[i] << endl;
        i++;

    }

    return 0;
}
