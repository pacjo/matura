#include <bits\stdc++.h>

using namespace std;

int main() {

    const int n = 40000;

    //fstream file("przyklad.txt");
    fstream file("instrukcje.txt");

    int w = 0;

    for (int i = 0; i < n; i++) {

        string inst = "";
        string chr = "";
        int num = 0;
        file >> inst;
        if (inst == "DOPISZ") {

            file >> chr;
            //cout << chr << endl;
            w++;

        }

        if (inst == "USUN") {

            file >> num;
            //cout << num << endl;
            w--;

        }

    }

    cout << w << endl;

    return 0;
}
