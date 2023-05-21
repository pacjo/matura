#include <bits\stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;

    int w = 0;
    int counter = 1;

    while (n > 0) {

        w += (9-(n%10))*counter;
        counter = counter*10;
        n = n / 10;

    }

    cout << w << endl;

    return 0;
}
