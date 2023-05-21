#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("mecz.txt"); int n = 10000;
    //fstream file("mecz_przyklad.txt"); int n = 10000;

    string game; file >> game;

    int maxstreak = 0, curstreak = 0;
    string streakteam = "";
    int w = 0;
    for (int i = 1; i < n; i++) {

        if (game[i-1] == game[i])
            curstreak++;
        else {

            if (curstreak >= 10) w++;
            curstreak = 1;

        }

        if (curstreak > maxstreak) {

            maxstreak = curstreak;
            streakteam = game[i];       // won't work at the beginning, but we don't care

        }

    }

    cout << w << " " << streakteam << " " << maxstreak << endl;

    return 0;
}
