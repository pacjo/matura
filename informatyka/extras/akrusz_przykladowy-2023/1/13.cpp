#include <bits/stdc++.h>

using namespace std;

char returnFirstInStraightLine(string arr[], int from_j, int from_l, int to_j, int to_l) {

    if (from_j == to_j) {

        while (from_l != to_l) {

            if (arr[from_j][from_l] != '.') {

                return arr[from_j][from_l];
                break;

                from_l++;

            }

        }

    } else {

       while (from_j != to_j) {

            if (arr[from_j][from_l] != '.') {

                return arr[from_j][from_l];
                break;

                from_j++;

            }

        }

    }

}

int main() {

    int k[2] = { 0 };        // czarny krol         k(x, y)
    int K[2] = { 0 };        // bialy krol

    //fstream file("szachy.txt"); int n = 125;
    fstream file("szachy_przyklad.txt"); int n = 9;


    int counter_czarne = 0;
    int counter_biale = 0;
    for (int i = 0; i < n; i++) {       // for every board

        string tab[8];
        for (int j = 0; j < 8; j++) {       // get every line

            string row;
            file >> tab[j];
            //cout << tab[j] << endl;

            for (int l = 0; l < tab[j].size(); l++) {

                if (tab[j][l] == 'k') {

                    k[0] = l;   // l = x
                    k[1] = j;   // j = y

                } else if (tab[j][l] == 'K') {

                    K[0] = l;   // l = x
                    K[1] = j;   // j = y

                }

            }

        }

        cout << endl << endl << "board: " << i << endl;
        cout << "k: " << k[0] << "," << k[1] << endl;
        cout << "K: " << K[0] << "," << K[1] << endl;

        cout << "0-j: " << returnFirstInStraightLine(tab, 0, k[0])


    }

    return 0;
}
