#include <bits/stdc++.h>

using namespace std;

int SumaKwCyfr(int n) {

    int w = 0;
    while (n > 0) {

        w += (n%10)*(n%10);
        n = n / 10;

    }

    return w;

}

int main() {

    int n = 0; cin >> n;

    cout << SumaKwCyfr(n) << endl;

    return 0;
}
