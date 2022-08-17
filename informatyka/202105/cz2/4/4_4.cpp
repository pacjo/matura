#include <bits\stdc++.h>

using namespace std;

vector<string> word;

string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {

    const int n = 40000;

    //fstream file("przyklad.txt");
    fstream file("instrukcje.txt");

    for (int i = 0; i < n; i++) {

        string inst = "";
        string chr = "";
        file >> inst >> chr;

        // switch case would probably be better, but i'm too lazy
        if (inst == "DOPISZ") {

            word.push_back(chr);

        } else if (inst == "ZMIEN") {

            word.pop_back();
            word.push_back(chr);

        } else if (inst == "USUN") {

            word.pop_back();

        } else if (inst == "PRZESUN") {

            for (int j = 0; j < word.size(); j++) {

                if (word[j] == chr) {       // found first occurance

                    string temp = word[j];
                    string temp2 = "";
                    for (int a = 0; a < 26; a++) {

                        if (string(1, alph[a]) == temp) {

                            temp2 = string(1, alph[a + 1]);
                            //cout << alph[a + 1] << endl;

                            word[j] = temp2;

                        }

                    }

                    //cout << "ZMIANA: " << temp << " -> " << temp2 << endl;

                }

            }

        }

    }

    for(int i = 0; i < word.size(); i++) {

        cout << word[i];

    }

    return 0;
}
