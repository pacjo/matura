#include <bits/stdc++.h>

using namespace std;

int nwd(int a, int b) {

    while (b > 0) {

        int r = a % b;
        a = b;
        b = r;

    }

    return a;

}

int main() {

    int a, b, M = 0;
    fstream file("liczby.txt"); int n = 1000;
    //fstream file("liczby_przyklad.txt"); int n = 5;

    int w = 0;
    for (int i = 0; i < n; i++) {

        file >> M >> a >> b;

        if (nwd(a, M) == 1) w++;

    }

    cout << w << endl;

    return 0;
}
