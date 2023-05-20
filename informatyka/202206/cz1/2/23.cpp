#include <bits/stdc++.h>

using namespace std;

string koduj(int n) {

    if (n == 1) return "";
    else {

        int k = n/2;

        if(k%2 == 0)
            return koduj(k) + "A";
        else
            return "B" + koduj(k);

    }

}

int main() {

    int n = 0; cin >> n;

    cout << koduj(n) << endl;

    return 0;
}
