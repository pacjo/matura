#include <bits/stdc++.h>

using namespace std;

bool is_smaller(pair <int, string> p1, pair <int, string> p2) {

    if (p1.first < p2.first) {          // easy one

        return true;

    } else if (p1.first == p2.first) {  // not so much, but those words are pretty small, so we can cheat

        int smaller_size = min(p1.second.size(), p2.second.size());
        /*long long*/ int w1 = 0;
        /*long long*/ int w2 = 0;
        //cout << endl << "====: p1=p2, smaller size: " << smaller_size << endl;

        for (int i = 0; i < smaller_size; i++) {

            //cout << p1.second[i] << " " << p2.second[i] << " - " << int(p1.second[i]) << " " << int(p2.second[i]) << endl;
            //if (p1.second[i] > p2.second[i]) return false;
            w1 = w1*10 + int(p1.second[i])-int('A');
            w2 = w2*10 + int(p2.second[i])-int('A');
            if (w1 > w2) return false;

        }


    } else return false;

    return true;

}

int main() {

    fstream file("pary.txt"); int n = 100;
    //fstream file("przyklad.txt"); int n = 100;

    vector <pair<int, string>> tab;

    for (int i = 0; i < n; i++) { // save into array

        int num; string word;
        file >> num >> word;

        if (num == word.size()) tab.push_back(make_pair(num, word));

    }

    //cout << tab.size() << endl;

    for (int i = 0; i < tab.size(); i++) {

        bool smaller_than_all = true;
        for (int j = 0; j < tab.size(); j++) {

            if (i != j) {       // just make sure we're not comparing the same elements

                //cout << tab[i].first << " " << tab[i].second << ", "
                //     << tab[j].first << " " << tab[j].second << " - "
                //     << is_smaller(tab[i], tab[j]) << endl;

                if (!is_smaller(tab[i], tab[j])) {

                    smaller_than_all = false;
                    break;
                    // should work ?

                }

            }

        }

        if (smaller_than_all) cout << tab[i].first << " " << tab[i].second << endl;

    }

    return 0;
}
