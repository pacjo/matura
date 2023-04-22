#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("pary.txt"); int n = 100;
    //fstream file("przyklad.txt"); int n = 100;

    for (int i = 0; i < n; i++) {

        int num; string word;
        file >> num >> word;

        int maxlen = 0;
        string maxsubstr = "";
        int curlen = 0;
        string cursubstr = "";

        char last = word[0];
        for (int j = 0; j < word.size(); j++) {

            if (word[j] == last) {

                curlen++;
                cursubstr += word[j];

            } else if (word[j] != last) {

                //cout << "reset" << endl;

                // reset counters
                curlen = 1;
                cursubstr = word[j];

            }

            if (curlen > maxlen) {

                // save best
                maxlen = curlen;
                maxsubstr = cursubstr;

            }

            last = word[j];

            //cout << curlen << " " << cursubstr.size() << endl;

        }

        //cout << endl;
        //cout << maxlen << " " << maxsubstr << endl; // better looking, more readable
        cout << maxsubstr << " " << maxlen << endl; // what they want in answers

    }

    return 0;
}
