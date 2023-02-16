#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;
    int w = 0, counter = n, sum = 0;

    while (counter*counter > n) {   // get first int (i^2 <= n)

        counter--;

    }

    //cout << counter << endl;

    sum = counter*counter;
    w = 1;

    while (sum < n) {

        if (sum + (counter*counter) > n) counter--;
        else {

            sum += (counter*counter);
            w++;

        }

        //cout << sum << " " << counter << endl;

    }

    cout << w << endl;

    return 0;
}
