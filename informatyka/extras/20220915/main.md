[zbiór](https://cke.gov.pl/images/_EGZAMIN_MATURALNY_OD_2015/Materialy/Zbiory_zadan/Matura_Zbi%C3%B3r_zada%C5%84_Informatyka.pdf)

# zad 18 / 42
## 18.1
a | b | l. operacji
-- | -- | --------
25 | 15 | 3
116 | 324 | 6
762 | 282 | 6


## 18.2
$a_1, a_2... a_n$ | NWD($a_1, a_2... a_n$)
----------------- | ---------------------
36, 24, 72, 150 | 6
119, 187, 323, 527, 731 | 17
121, 330, 990, 1331, 110, 225 | 1


## 18.3
```
#include <bits/stdc++.h>

using namespace std;

int nwd(int a, int b) {

    while (b > 0) {

        int r = a % b;
        a = b;
        b = r;

    }

    return a;

}

int main() {

    int n, w; cin >> n >> w;
    // cin >> w <=> w = a1

    for (int i = 0; i < n - 1; i++) {

        int a; cin >> a;
        w = nwd(w, a);

    }

    cout << w << endl;

    return 0;
}

```
[main.cpp](main.cpp)