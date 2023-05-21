#include <bits/stdc++.h>

using namespace std;

bool czymozna_y_do_x(int x, int y) {

    // holy shit it works
    while (y > x) {

        y = y / 2;

    }

    if (x == y) return true;
    else return false;

}

int main() {

    fstream file("pary.txt"); int n = 1000;

    for (int i = 0; i < n; i++) {

        int x, y; file >> x >> y;

        //cout << czymozna_y_do_x(x, y) << endl;
        if (czymozna_y_do_x(x, y)) cout << x << " " << y << endl;

    }

    return 0;
}
