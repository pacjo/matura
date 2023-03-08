#include <bits/stdc++.h>

using namespace std;

bool check_row_empty(string arr[], int row) {

    bool is_dot = true;

    for (int i = 0; i < 8; i++) {

        if (arr[i][row] != '.') is_dot = false;

    }

    return is_dot;

}

int main() {

    fstream file("szachy.txt"); int n = 125;
    //fstream file("szachy_przyklad.txt"); int n = 9;

    int w = 0, max_counter = 0;
    for (int i = 0; i < n; i++) {       // for every board

        string tab[8];
        for (int j = 0; j < 8; j++) file >> tab[j];

        //for (int j = 0; j < 8; j++) cout << tab[j] << endl;
        //cout << endl;

        /*if (check_row_empty(tab, 0) ||
            check_row_empty(tab, 1) ||
            check_row_empty(tab, 2) ||
            check_row_empty(tab, 3) ||
            check_row_empty(tab, 4) ||
            check_row_empty(tab, 5) ||
            check_row_empty(tab, 6) ||
            check_row_empty(tab, 7)) counter++;*/

        int counter = 0;
        for (int j = 0; j < 8; j++) {

            counter += check_row_empty(tab, j);
            max_counter = max(counter, max_counter);

        }

        if (counter > 0) w++;

    }

    cout << w << " " << max_counter << endl;

    return 0;
}
