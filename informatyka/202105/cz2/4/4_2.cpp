#include <bits\stdc++.h>

using namespace std;

int main() {

    const int n = 4000;

    //fstream file("przyklad.txt");
    fstream file("instrukcje.txt");

    string instm = ""   , instl = "";
    int c = 0, cm = 0;

    while (!file.eof()) {   // until end of file is not reached

        string inst = "";
        string chr = "";
        file >> inst >> chr;
        //cout << inst << endl;

        if (inst == instl) {

            c++;
            if (c > cm) {

                instm = inst;
                cm = c;

            }

        } else {

            c = 1;

        }

        instl = inst;

    }

    cout << instm << " " << cm << endl;

    return 0;
}
