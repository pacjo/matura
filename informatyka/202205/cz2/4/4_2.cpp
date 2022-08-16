#include <bits\stdc++.h>

using namespace std;

int numofczyn(int n) {

    int w = 0, i = 2;

    while (n != 1) {

        //cout << i << endl;

        if(n % i == 0) {

            n = n / i;
            i = 2;
            w++;

        } else {

            i++;

        }

    }

    return w;

}

int numofdifczyn(int n) {

    int w = 0, i = 2;
    vector<int> tab;

    while (n != 1) {

        if(n % i == 0) {

            n = n / i;
            //i = 2;        //can't do this before comparision
            //w++;

            bool isnew = true;
            for (int j = 0; j < tab.size(); j++) {

                if (tab[j] == i) {      // isn't new

                    isnew = false;
                    break;      // no need to continue the search

                }

            }

            //cout << i << "   " << isnew << endl;

            if (isnew) {

                w++;
                tab.push_back(i);

            }

            i = 2;

        } else {

            i++;

        }

    }

    return w;

}

int main() {

    const int n = 200;
    int tab[n] = { 0 };

    fstream file("liczby.txt");
    //fstream file("przyklad.txt");

    for (int i = 0; i < n; i++) file >> tab[i];
    //for (int i = 0; i < n; i++) cout << tab[i] << endl;

    //cout << numofdifczyn(210) << endl;

    int maxczyn = 0;
    int maxdifczyn = 0;

    int maxczynnum = 0;
    int maxdifczynnum = 0;

    for (int i = 0; i < n; i++) {

            int t = tab[i];
            if(numofczyn(t) > maxczyn) {

                maxczyn = numofczyn(t);
                maxczynnum = t;

            }

            if (numofdifczyn(t) > maxdifczyn) {

                maxdifczyn = numofdifczyn(t);
                maxdifczynnum = t;

            }

    }

    cout << maxczynnum << " " << maxczyn << " ";
    cout << maxdifczynnum << " " << maxdifczyn << endl;

    return 0;

}
