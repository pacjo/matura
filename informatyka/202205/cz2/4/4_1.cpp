#include <bits\stdc++.h>

using namespace std;

int main() {

    const int n = 200;
    string tab[n] = {""};

    fstream file("liczby.txt");
    //fstream file("przyklad.txt");

    for (int i = 0; i < n; i++) file >> tab[i];
    //for (int i = 0; i < n; i++) cout << tab[i] << endl;

    int w = 0;
    for (int i = 0; i < n; i++) {

        string temp = tab[i];

        if (temp[0] == temp[temp.length() - 1]) w++;

    }

    for (int i = 0; i < n; i++) {

        string temp = tab[i];

        if (temp[0] == temp[temp.length() - 1]) {

            cout << w << " " << temp << endl;
            break;

        }

    }

}
