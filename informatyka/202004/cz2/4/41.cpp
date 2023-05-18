#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("dane4.txt"); int n = 1000;

    int maxl = INT_MIN;
    int minl = INT_MAX;

    int last = 0; file >> last;     // cause we're starting from the 2nd number
    int cur = 0;

    for (int i = 1; i < n; i++) {

        file >> cur;

        maxl = max(maxl, abs(last-cur));
        minl = min(minl, abs(last-cur));

        last = cur;

    }

    cout << maxl << endl << minl << endl;

    return 0;
}
