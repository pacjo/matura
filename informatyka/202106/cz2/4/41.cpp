#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("napisy.txt"); int n = 1000;
    //fstream file("przyklad.txt"); int n = 1000;

    string temp;
    int w = 0;
    while (file >> temp) {

        for (int i = 0; i < 50; i++) {

            if (temp[i] >= '0' && temp[i] <= '9') w++;

        }

    }

    cout << w << endl;

    return 0;
}
