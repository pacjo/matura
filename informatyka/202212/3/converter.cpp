#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("liczby.txt"); int n = 100;
    //fstream file("liczby_przyklad.txt"); int n = 100;

    for (int i = 0; i < n; i++) {

        int temp; file >> temp;
        cout << hex << temp << endl;

    }

    return 0;
}
