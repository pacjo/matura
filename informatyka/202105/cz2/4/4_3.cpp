#include <bits\stdc++.h>

using namespace std;

int main() {

    const int n = 4000;

    int tab[100] = { 0 };

    //fstream file("przyklad.txt");
    fstream file("instrukcje.txt");

    string instm = "", instl = "";
    int c = 0, cm = 0;

    while (!file.eof()) {   // until end of file is not reached

        string inst = "";
        char chr;
        file >> inst >> chr;
        //cout << inst << endl;

        if (inst == "DOPISZ") {

            //cout << chr << endl;
            tab[chr - 65]++;

        }

    }

    int mc = 0, mpointer = 0;
    for (int i = 0; i < 100; i++) {

        if (tab[i] > mc) {

            mc = tab[i];
            mpointer = i;

        }

    }

    cout << (char)(mpointer + 65) << " " << mc << endl;

    return 0;
}
