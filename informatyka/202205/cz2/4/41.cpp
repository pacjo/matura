#include <bits\stdc++.h>

using namespace std;

int main() {

    fstream file("liczby.txt"); int n = 200; // <10, 100000>
    //fstream file("przyklad.txt"); int n = 200;

    bool first = true;
    string sn = "";
    int w = 0;
    for (int i = 0; i < n; i++) {

        string temp; file >> temp;
        if (temp[0] == temp[temp.size()-1]) {

            w++;
            if (first) {

                first = false;
                sn = temp;

            }

        }

    }

    cout << w << " " << sn << endl;

}
