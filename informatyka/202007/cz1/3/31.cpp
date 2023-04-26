#include <bits/stdc++.h>

using namespace std;

int f(int n) {

    //cout << 1;

    if (n == 0) return 1;
    else {

        int s = 1;
        for (int i = 0; i <= n-1; i++) s += f(i);

        return s;

    }

}

int main() {

    cout << f(200) << endl;

    string len = "";
    //cin >> len;     // uncomment line 7
    cout << "length: " << len.size() << endl;

    return 0;
}
