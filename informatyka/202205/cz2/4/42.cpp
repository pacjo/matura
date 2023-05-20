#include <bits\stdc++.h>

using namespace std;

int l_czynn(int n) {

    int w = 0;
    while (n > 1) {

        //cout << n << endl;

        for (int i = 2; i <=n; i++) {

            if (n % i == 0) {

                w++;
                n = n / i;
                break;

            }

        }

    }

    return w;

}

int l_dist_czynn(int n) {

    int tab[n+1] = { 0 };

    int w = 0;
    while (n > 1) {

        for (int i = 2; i <=n; i++) {

            if (n % i == 0) {

                //cout << n << " - " << i << endl;

                if (tab[i] != 1) w++;

                tab[i] = 1;
                n = n / i;
                break;

            }

        }

    }

    return w;

}

int main() {

    fstream file("liczby.txt"); int n = 200; // <10, 100000>
    //fstream file("przyklad.txt"); int n = 200;

    int max_czynn_num = 0, max_czynn_val = 0;
    int max_dist_czynn_num = 0, max_dist_czynn_val = 0;
    for (int i = 0; i < n; i++) {

        int temp; file >> temp;
        if (l_czynn(temp) > max_czynn_num) {

            max_czynn_num = l_czynn(temp);
            max_czynn_val = temp;

        }
        if (l_dist_czynn(temp) > max_dist_czynn_num) {

            max_dist_czynn_num = l_dist_czynn(temp);
            max_dist_czynn_val = temp;

        }

    }

    cout << max_czynn_val << " " << max_czynn_num << " ";
    cout << max_dist_czynn_val << " " << max_dist_czynn_num << endl;

}
