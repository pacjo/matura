#include <bits/stdc++.h>

using namespace std;

int main() {

    //fstream file("przyklad.txt"); int n = 5;
    fstream file("dane_ulamki.txt"); int n = 1000;

    long long int mian[n] = { 0 };
    long long int licz[n] = { 0 };

    long long int a = 0;
    long long int b = 4*9*25*49*13;

    for (int i = 0; i < n; i++) {

        file >> mian[i] >> licz[i];
        //cout << mian[i] << " " << licz[i] << endl;

        a += (mian[i]*b)/licz[i];

    }

    cout << a << endl;

    return 0;
}
