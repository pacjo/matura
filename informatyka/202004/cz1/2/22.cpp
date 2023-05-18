#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;

    int t[n] = { 0 };
    for (int i = 0; i < n; i++) cin >> t[i];

    int maxc = 0;
    int maxnum = 0;

    // for each element in the array
    for (int i = 0; i < n; i++) {

        // count the number of occurances
        int counter = 0;
        for (int j = 0; j < n; j++) {

            //cout << t[i] << " " << t[j] << " - " << (t[i] == t[j]) << endl;

            if (t[j] == t[i]) counter++;

        }

        if (counter > maxc) {

            maxc = counter;
            maxnum = t[i];

        }

    }

    cout << maxnum << endl;

    return 0;
}
