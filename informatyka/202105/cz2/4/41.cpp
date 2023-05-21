#include <bits\stdc++.h>

using namespace std;

int main() {

    fstream file("instrukcje.txt"); int n = 2000;
    //fstream file("przyklad.txt"); int n = 20;

    int w = 0;
    for (int i = 0; i < n; i++) {

        string inst, val;
        file >> inst >> val;

        if (inst == "DOPISZ") w++;
        if(inst == "USUN") w--;

    }

    cout << w << endl;

    return 0;
}
