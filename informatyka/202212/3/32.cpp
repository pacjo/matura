#include <bits/stdc++.h>

using namespace std;

void sito(vector<bool> tab, int n) {

    for (int i = 2; i < n; i++) {

        for (int j = i*i; j < n; j+=i) tab[j] = false;

    }

}

bool is_prime(int n) {

    for (int i = 2; i < sqrt(n); i++) {

        if (n % i == 0) return false;

    }

    return true;

}

int main() {

    /*int tabsize = 1000005;
    vector<bool> tab(tabsize);
    fill_n(tab.begin(), tabsize, true);

    sito(tab, tabsize);
    for (int i = 0; i < 25; i++) cout << tab[i] << " ";*/

    fstream file("liczby.txt"); int n = 100;
    //fstream file("liczby_przyklad.txt"); int n = 100;

    int w = 0;
    for (int i = 0; i < n; i++) {

        int temp; file >> temp;

        if (is_prime(temp-1)) w++;

    }

    cout << w << endl;

    return 0;
}
