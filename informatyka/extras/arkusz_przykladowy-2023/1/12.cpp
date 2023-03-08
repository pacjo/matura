#include <bits/stdc++.h>

using namespace std;

// A 65  - wysokie
// a 97  - niskie
// dif +32

int main() {

    fstream file("szachy.txt"); int n = 125;
    //fstream file("szachy_przyklad.txt"); int n = 9;


    int counter = 0;
    int minsum = 98989;
    int tab[150] = { 0 };
    for (int i = 0; i < n; i++) {       // for every board

        //string tab[8];
        for (int j = 0; j < 8; j++) {       // for every line

            string row;
            file >> row;

            for (int k = 0; k < 8; k++) tab[(int)row[k]]++;       // for every character

        }

        bool is_even = true;                        // checks for even numbers
        for (int j = 65; j <= 90; j++) {

            //cout << tab[i] << endl;

            if (tab[j] != tab[j + 32]) is_even = false;
            //cout << i << ":: " << char(j) << ": " << tab[j] << "   " << char(j+32) << ": " << tab[j+32] << endl;

        }

        if (is_even) {

            counter++;

            // calc and update smallest array sum
            int sum = 0;
            for (int j = 65; j <= 90; j++) {

                sum += tab[j];

            }
            minsum = min(minsum, (sum*2));

            //cout << is_even << " " << sum << " " << minsum;

        }

         //cout << endl << endl;

        // clear array
        for (int k = 0; k < 150; k++) tab[k] = 0;

    }

    cout << counter << " " << minsum << endl;

    return 0;
}
