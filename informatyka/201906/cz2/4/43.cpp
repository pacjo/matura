#include <bits/stdc++.h>

using namespace std;

int weight(int n) {

    if (n/10 == 0)
        return n;
    else {

        int w = 0;
        while (n > 0) {

            w += n%10;
            n = n / 10;

        }

        return weight(w);

    }

}

int main() {

    //fstream liczby("liczby.txt"); int n = 300;
    fstream pierwsze("pierwsze.txt"); int m = 200;
    //fstream liczby("liczby_przyklad.txt"); int n = 50;
    //fstream pierwsze("pierwsze_przyklad.txt"); int m = 50;

    int w = 0;
    for (int i = 0; i < m; i++) {

        int num; pierwsze >> num;

        if (weight(num) == 1) {

            w++;
            //cout << num << endl;

        }

    }

    cout << w << endl;

    return 0;
}
