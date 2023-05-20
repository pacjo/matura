#include <bits/stdc++.h>

using namespace std;

int reverse_num(int n) {

    string sn = to_string(n);
    reverse(sn.begin(), sn.end());

    return stoi(sn);

}

bool is_prime(int n) {

    for (int i = 2; i < n; i++) {

        if (n % i == 0) return false;

    }

    return true;

}

int main() {

    fstream file("liczby.txt"); int n = 100;
    //fstream file("przyklad.txt"); int n = 11;

    int maxdif = 0;
    int maxdifval = 0;

    for (int i = 0; i < n; i++) {

        int temp; file >> temp;

        if (is_prime(temp) && is_prime(reverse_num(temp))) cout << temp << endl;
    }

    return 0;
}
