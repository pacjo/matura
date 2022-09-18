#include <bits/stdc++.h>

using namespace std;

bool bs(int A[], int n, int a, int b) {      //a - start, b - end

    int s = (a + b) / 2;
    //cout << s << endl;
    if (A[s] == n) return true;
    else {

        if(A[s] > n) return bs(A, n, a, s);
        else return bs(A, n, s + 1, b);

    }

    return false;

}

int main() {

    int n; cin >> n;
    int tab[4] = {1, 2, 3, 4};                  // yup, it's the best I can do
    cout << bs(tab, n, 0, n - 1) << endl;

    return 0;
}
