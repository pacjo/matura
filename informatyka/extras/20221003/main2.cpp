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

    int counter = 0;

    for (int i = 0; i < n; i++) {

        float mian, licz;
        file >> mian >> licz;
        //cout << mian << " " << licz << ":   " << nwd(mian, licz) << endl;

        if (nwd(mian, licz) == 1) counter++;

    }


    cout << counter << endl;

    return 0;
}
