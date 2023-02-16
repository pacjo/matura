#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("napisy.txt"); int n = 1000;
    //fstream file("przyklad.txt"); int n = 1000;

    string temp;
    string out = "";
    int counter = 20, counter2 = 0;
    for (int i = 1; i <= n; i++) {

        file >> temp;
        if(i == counter) {

            out += temp[counter2];
            counter += 20;
            counter2++;

        }

    }

    cout << out << endl;

    return 0;
}
