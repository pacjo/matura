#include <bits\stdc++.h>

using namespace std;

string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {

    //for (int i = 0; i < 26; i++) cout << char(i+65); cout << endl;

    fstream file("instrukcje.txt"); int n = 2000;
    //fstream file("przyklad.txt"); int n = 20;

    string output = "";

    for (int i = 0; i < n; i++) {

        string inst; char val;
        file >> inst >> val;

        if (inst == "DOPISZ")
            output += val;
        else if (inst == "ZMIEN")
            output[output.size()-1] = val;
        else if (inst == "USUN")
            output = output.substr(0, output.size()-1);
        else if (inst == "PRZESUN") {

            for (int i = 0; i < output.size(); i++) {

                if (output[i] == val) {

                    output[i] = alph[val-65+1+26];
                    break;

                }

            }

        }

    }

    cout << output << endl;

    return 0;
}
