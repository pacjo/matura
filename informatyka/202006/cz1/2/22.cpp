#include <bits/stdc++.h>

using namespace std;

void sym(int a, int b) {

    if (a != 0) {

        sym(a-1, b+1);
        cout << 1;
        sym(a-1, b+1);

    }

}

int main() {

    int a, b; cin >> a >> b;

    sym(a, b);

    cout << endl << "copy above output (one line only) and paste here:";


    string w; cin >> w;
    cout << endl << "lenght: " << w.size() << endl;

    return 0;
}
