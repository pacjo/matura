#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("galerie.txt"); int n = 50;
    //fstream file("galerie_przyklad.txt"); int n = 10;

    string mincity, maxcity;
    int minc = INT_MAX, maxc = 0;

    for (int i = 0; i < n; i++) {

        string temp;
        getline(file, temp);

        temp = temp.substr(temp.find(" ") + 1, temp.size());      // remove country code
        string city = temp.substr(0, temp.find(" "));
        //cout << city << " ";  // print city name
        temp = temp.substr(temp.find(" ") + 1, temp.size());      // remove city name

        int num_repeat = 0, counter = 0;
        vector<int> tab;

        while (temp[0] != '0' && counter < 70) {

            int x = stoi(temp.substr(0, temp.find(" ")));
            temp = temp.substr(temp.find(" ") + 1, temp.size());      // remove everything until next space (" ")
            int y = stoi(temp.substr(0, temp.find(" ")));
            temp = temp.substr(temp.find(" ") + 1, temp.size());      // remove everything until next space (" ")

            int area = (x*y);

            //cout << "(" << x << "," << y << ")" << "  " << area << (find(tab.begin(), tab.end(), area) == tab.end()) <<  endl;;

            // check if area already exists
            if (find(tab.begin(), tab.end(), area) != tab.end()) {        // value was seen before

                //cout << "test5" << endl;
                //continue;

            } else {                // first occurance, add to vector for future use

                tab.push_back(area);
                //cout << "here" << endl;

            }

            //tab.push_back(area);
            counter++;

        }

        //cout << city << ": " << counter <<  " " << tab.size() << " (";
        //sort(tab.begin(), tab.end());
        //for (int j = 0; j < tab.size(); j++) cout << tab[j] << " ";
        //cout << ")" << endl;

        if (tab.size() > maxc) {

            maxc = tab.size();
            maxcity = city;

        } else if (tab.size() < minc) {

            minc = tab.size();
            mincity = city;

        }

    }

    cout << maxcity << " " << maxc << endl;
    cout << mincity << " " << minc << endl;

    return 0;
}
