#include <bits/stdc++.h>

using namespace std;

int reverse_num(int n) {

    string sn = to_string(n);
    reverse(sn.begin(), sn.end());

    return stoi(sn);

}

int main() {

    //cout << reverse_num(1250010) << endl;

    fstream file("liczby.txt"); int n = 100;
    //fstream file("przyklad.txt"); int n = 11;

    int maxdif = 0;
    int maxdifval = 0;

    for (int i = 0; i < n; i++) {

        int temp; file >> temp;

        if (abs(temp - reverse_num(temp)) > maxdif) {

            maxdif = abs(temp - reverse_num(temp));
            maxdifval = temp;

        }

    }

    cout << maxdifval << " " << maxdif << endl;

    return 0;
}
