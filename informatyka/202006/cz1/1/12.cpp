#include <bits/stdc++.h>

using namespace std;

bool czy_k_podobne(int n, int A[], int B[], int k) {

    if (k > 0)
        for (int i = 0; i < k; i++)
            //cout << A[i] << " " << B[n-k+i] << endl;
            if (A[i] != B[n-k+i]) return false;

    //cout << endl;

    for (int i = 0; i < n; i++)
        //cout << A[(k+i)%n] << " " << B[i] << endl;
        if (A[(k+i)%n] != B[i]) return false;

    return true;

}

int main() {

    int n, k; cin >> n >> k;
    int A[n] = { 0 };
    int B[n] = { 0 };

    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    //cout << czy_k_podobne(n, A, B, k) << endl;

    if (czy_k_podobne(n, A, B, k))
        cout << "PRAWDA" << endl;
    else
        cout << "FA£SZ" << endl;

    return 0;
}
