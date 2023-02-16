#include <bits/stdc++.h>

using namespace std;

int main() {

    fstream file("napisy.txt"); int n = 1000;
    //fstream file("przyklad.txt"); int n = 1000;

    string temp;
    string out = "";
    while (file >> temp) {

        //temp = "PTGD73IC83OEIESKMCJNULNWGRKJMUNVAEGSMEHTSQDNJTTNQE";

        vector <int> v;

        for (int i = 0; i < 50; i++) {

            if (temp[i] >= '0' && temp[i] <= '9') v.push_back(temp[i] - 48);

        }

        //cout << v.size() << endl;

        if(v.size() > 0) {

            int sum = 0;
            if (v.size() % 2 == 0) {

                for (int j = 0; j < v.size(); j+=2) {

                    sum = v[j]*10 + v[j+1];
                    //cout << j << " "<< sum << endl;

                    if (!(sum < 65 || sum > 90) && out[out.size()-3] != 'X') {

                        out += char(sum);
                        //if (out[out.size()-1] == out[out.size()-2] == out[out.size()-3] == 'X') break;

                    }

                }

            } else {

                for (int j = 0; j < (v.size()-1); j+=2) {

                    sum = v[j]*10 + v[j+1];

                    if (!(sum < 65 || sum > 90) && out[out.size()-3] != 'X') {

                        out += char(sum);
                        //if (out[out.size()-1] == out[out.size()-2] == out[out.size()-3] == 'X') break;

                    }

                }

            }

        }

        if (out[out.size()-1] == out[out.size()-2] == out[out.size()-3] == 'X') break;

    }

    cout << out << endl;

    return 0;
}
