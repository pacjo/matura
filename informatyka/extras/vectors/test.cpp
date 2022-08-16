#include <bits\stdc++.h>

using namespace std;

int main() {

    int n = 0; cin >> n;
    vector<int> tab;

    for(int i = 0; i < n; i++) {

        int temp; cin >> temp;
        tab.push_back(temp);

    }

    for(int i = 0; i < tab.size(); i++) {

        cout << tab[i] << endl;

    }

    return 0;
}
