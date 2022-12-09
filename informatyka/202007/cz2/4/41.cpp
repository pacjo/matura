#include <bits/stdc++.h>

using namespace std;

int calculate_sum(string id) {

    int sum = 0;

    for (int i = 3; i < id.size(); i++) {

        sum += id[i] - 48;

    }

    return sum;

}

int main() {

    fstream file("identyfikator.txt"); int n = 200;
    //fstream file("identyfikator_przyklad.txt"); int n = 20;

    int maxsum = INT_MIN;
    int sum = 0;

    string id = "";
    stack<string> maxid;
    for (int j = 0; j < n; j++) {

        file >> id;


        sum = calculate_sum(id);

        //cout << sum << endl;
        //maxsum = max(sum, maxsum);
        if (sum >= maxsum) {

            maxsum = sum;
            maxid.push(id);

        }

    }

    while (!maxid.empty() && calculate_sum(maxid.top()) == maxsum) {

        cout << maxid.top() << endl;
        maxid.pop();

    }

    return 0;
}
