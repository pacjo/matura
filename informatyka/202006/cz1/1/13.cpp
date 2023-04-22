#include <bits/stdc++.h>

using namespace std;

bool czy_podobne(int n, int A[], int B[]) {

    bool good_k_exists = false;

    for (int k = 0; k < n; k++) {

        bool test1 = true;
        bool test2 = true;

        if (k > 0)
            for (int i = 0; i < k; i++)
                //cout << A[i] << " " << B[n-k+i] << endl;
                if (A[i] != B[n-k+i]) test1 = false;

        for (int i = 0; i < n; i++)
            //cout << A[(k+i)%n] << " " << B[i] << endl;
            if (A[(k+i)%n] != B[i]) test2 = false;

        good_k_exists = max(test1 && test2, good_k_exists);     // yea, I'm lazy
        cout << test1 << " " << test2 << endl;

    }

    return good_k_exists;

}

int main() {

    int n; cin >> n;
    int A[n] = { 0 };
    int B[n] = { 0 };

    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    //cout << czy_k_podobne(n, A, B, k) << endl;

    if (czy_podobne(n, A, B))
        cout << "PRAWDA" << endl;
    else
        cout << "FAŁSZ" << endl;

    return 0;
}
