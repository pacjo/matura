#include <bits/stdc++.h>

using namespace std;

int checkFirst(int n) {

    for (int i = 2; i < sqrt(n) + 1; i++) {

        //cout << n << " " << i << endl;

        if (n % i == 0) {

            return false;
            break;

        }

    }

    return true;

}

int main() {

    int a, b, M = 0;
    fstream file("liczby.txt"); int n = 1000;
    //fstream file("liczby_przyklad.txt"); int n = 5;

    int w = 0;
    for (int i = 0; i < n; i++) {

        file >> M >> a >> b;

        if (checkFirst(M)) w++;

    }

    cout << w << endl;

    return 0;
}
