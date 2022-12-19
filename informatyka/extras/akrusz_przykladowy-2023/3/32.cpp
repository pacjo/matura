#include <bits/stdc++.h>

using namespace std;

int power(int a, int x) {

    int w = a;
    while (x > 1) {

        w = w * a;
        x--;

    }

    return w;

}

int main() {

    int a, x, M = 0; cin >> a >> x >> M;

    cout << (power(a, x) % M) << endl;

    return 0;
}
