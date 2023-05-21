#include <bits\stdc++.h>

using namespace std;

int main() {

    fstream file("instrukcje.txt"); int n = 2000;
    //fstream file("przyklad.txt"); int n = 20;

    int maxlen = 0, len = 0;
    string maxlenval = "";

    string last_inst = "DOPISZ";        // it's like that, because string can't be empty when we're doing other things
    int temp;
    //file >> last_inst >> temp;       // we only get temp to get rid of whole line

    for (int i = 0; i < n; i++) {

        if (i > 0) {

            string inst, val;
            file >> inst >> val;

            //cout << last_inst << " " << inst << endl;

            if (inst == last_inst) len++;
            if (inst != last_inst) len = 1;

            if (len > maxlen) {

                maxlen = len;
                maxlenval = inst;

            }

            last_inst = inst;

        }

    }

    cout << maxlenval << " " << maxlen << endl;

    return 0;
}
