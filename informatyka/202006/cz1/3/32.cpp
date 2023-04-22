#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;

    int w = 0;
    while (n != 0) {

        w += n % 10;
        cout << w << endl;
        n = n / 10;

    }

    cout << endl << w << endl;

    return 0;
}
