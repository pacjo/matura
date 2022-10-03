#include <bits/stdc++.h>

using namespace std;

int nwd(int a, int b) {

    while (b > 0) {

        int r = a % b;
        a = b;
        b = r;

    }

    return a;

}

int main() {

    //fstream file("przyklad.txt"); int n = 5;
    fstream file("dane_ulamki.txt"); int n = 1000;

    int mian[n] = { 0 };
    int licz[n] = { 0 };

    for (int i = 0; i < n; i++) {

        file >> mian[i] >> licz[i];
        //cout << mian[i] << " " << licz[i] << endl;

        int nwd_um = nwd(mian[i], licz[i]);

        if (nwd_um > 1) {      // mo¿na uproscic

            mian[i] = mian[i] / nwd_um;      //uprosc
            licz[i] = licz[i] / nwd_um;      //uprosc

        }

    }

    int w = 0;
    for (int i = 0; i < n; i++) w += mian[i];

    cout << w << endl;

    return 0;
}
