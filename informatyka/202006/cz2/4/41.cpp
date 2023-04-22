#include <bits/stdc++.h>

using namespace std;

void erastostenes(bool* tab, int tab_size) {

    for (int i = 2; i < tab_size; i++) {

        for (int j = 2*i; j < tab_size; j += i) tab[j] = false;

    }

}

pair<int, int> num_to_primes(bool tab[], int tab_size, int num) {

    pair <int, int> numbers;

    // i believe primes should include 0 and 1
    // in such case:
    // 24 = 23 + 1
    // 6 = 5 + 1
    // nice, isn't it?

    for (int i = 2; i < tab_size && i <= num; i++) {

        for (int j = num; j < tab_size && j > 2; j--) {     // cause we want largest i <> j difference

            if ((tab[i] && tab[j]) && i + j == num) {       // if both are prime and i+j = number

                numbers.first = i;
                numbers.second = j;
                return numbers;

            }

        }

    }

    //return -1;      // yea, no numbers found, deal with it yourself

}

int main() {

    fstream file("pary.txt"); int n = 100;
    //fstream file("przyklad.txt"); int n = 100;

    int pn = 110;
    bool prime[pn];
    fill_n(prime, pn, true);

    erastostenes(prime, pn);
    //for (int i = 0; i < pn; i++) cout << prime[i] << " ";

    for (int i = 0; i < n; i++) {

        int num; string word;
        file >> num >> word;

        if (num % 2 == 0) {

            pair <int, int> numbers = num_to_primes(prime, pn, num);
            cout << num << " " << numbers.first << " " << numbers.second << endl;

        }

    }

    return 0;
}
