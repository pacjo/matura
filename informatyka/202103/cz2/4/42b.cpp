#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("galerie.txt"); int n = 50;
    //fstream file("galerie_przyklad.txt"); int n = 10;

    string country[n];
    fill_n(country, n, "");

    string mincity, maxcity;
    int minarea = INT_MAX, maxarea;

    for (int i = 0; i < n; i++) {

        string temp;
        getline(file, temp);

        temp = temp.substr(temp.find(" ") + 1, temp.size());      // remove country code
        string city = temp.substr(0, temp.find(" "));
        //cout << city << " ";  // print city name
        temp = temp.substr(temp.find(" ") + 1, temp.size());      // remove city name

        int area = 0, num = 0;

        while (temp[0] != '0' && num < 70) {

            int x = stoi(temp.substr(0, temp.find(" ")));
            temp = temp.substr(temp.find(" ") + 1, temp.size());      // remove everything until next space (" ")
            int y = stoi(temp.substr(0, temp.find(" ")));
            temp = temp.substr(temp.find(" ") + 1, temp.size());      // remove everything until next space (" ")

            //cout << "(" << x << "," << y << ")" << "  ";
            area += (x*y);
            num++;

        }

        if (area > maxarea) {

            maxarea = area;
            maxcity = city;

        } else if (area < minarea) {

            minarea = area;
            mincity = city;

        }

    }

            cout << maxcity << " " << maxarea << endl;
        cout << mincity << " " << minarea << endl;

    return 0;
}
