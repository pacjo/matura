#include <bits/stdc++.h>

using namespace std;

int main() {

    //fstream file("przyklad.txt");
    fstream file("dane_ulamki.txt");

    int n = 1000;
    float tabm[n + 5] = { 0 };
    float tabl[n + 5] = { 0 };
    int counter = 0;
    float min_um = INT_MAX;

    for (int i = 0; i < n; i++) {

        float mian, licz;
        file >> mian >> licz;

        if ((mian/licz) <= min_um) {

            min_um = (mian/licz);
            tabm[counter] = mian;
            tabl[counter] = licz;
            //cout << tabm[counter] << " " << tabl[counter] << endl;

            counter++;

        }

    }

    //cout << min_um << endl;

    float min_mian = INT_MAX, out_licz;
    for (int i = 0; i < counter; i++) {

        //cout << (tabm[i]/tabl[i]) << " " << min_um << endl;

        if (tabm[i] < min_mian && ((tabm[i]/tabl[i]) == min_um)) {

            min_mian = tabm[i];
            out_licz = tabl[i];

        }

    }
    cout << min_mian << " " << out_licz;

    return 0;
}
