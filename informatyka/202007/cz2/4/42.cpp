#include <bits/stdc++.h>

using namespace std;

bool is_pal_series(string input) {

    return (input[0] == input[2]);

}

bool is_pal_num(string input) {

    input = input.substr(3, input.size());
    int n = input.size();

    //cout << input << endl;

    bool is_pal = true;
    for (int i = 0; i < n/2; i++) {

        if (input[i] != input[n-i-1]) is_pal = false;

        //cout << input[i] << " " << input[n-i-1] << " --> " << is_pal << endl;

    }
    //cout << ": " << is_pal << endl;
    return is_pal;

}

int main() {

    fstream file("identyfikator.txt"); int n = 200;
    //fstream file("identyfikator_przyklad.txt"); int n = 20;

    string id = "";
    for (int j = 0; j < n; j++) {

        file >> id;

        if (is_pal_series(id) || is_pal_num(id)) cout << id << endl;

    }

    return 0;
}
