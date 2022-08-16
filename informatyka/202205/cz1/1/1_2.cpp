#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 0; cin >> n;
    int a[n] = { 0 };

    for (int i = 0; i < n; i++) cin >> a[i];

    int w = 0;
    for (int i = 1; i <=n; i++) {

        bool thereisi = false; 

        for (int j = 0; j < n; j++) {

            if (a[j] == i) thereisi = true;
            else continue;

        }

        if (!thereisi) w++; 

    }

    cout << w << endl;

    return 0;
}