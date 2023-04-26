#include <bits/stdc++.h>
//#include <algorithm> --then-> __gcd(a, b)

using namespace std;

int nwd(int a, int b) {

    int temp = 0;
    while (b > 0) {

        temp = b;
        b = a % b;
        a = temp;

    }

    return a;

}

int nww(int a, int b) {

    return (a*b)/nwd(a,b);

}

pair<int,int> correct(pair<int,int> frac) {

    int nwdval = nwd(frac.first, frac.second);

    return make_pair(frac.first/nwdval, frac.second/nwdval);

}

pair<int,int> substract(pair<int,int> f1, pair<int,int> f2) {

    pair<int,int> w;

    w.first = (f1.first * f2.second - f2.first * f1.second);
    w.second = (f1.second * f2.second);

    return correct(w);

}

int smallest_larger_than_frac(pair<int,int> frac) {

    if (frac.second % frac.first == 0)
        return frac.second / frac.first;
    else
        return frac.second / frac.first + 1;

}

void print_frac(pair<int,int> frac) {

    cout << frac.first << "/" << frac.second << endl;;

}

int main() {

    pair<int, int> frac;
    cin >> frac.first >> frac.second;

    //cout << substract(make_pair(1, 2), make_pair(1, 3)).first << "/" << substract(make_pair(1, 2), make_pair(1, 3)).second << endl;

    //print_frac(frac);
    //print_frac(make_pair(1,smallest_larger_than_frac(frac)));
    //print_frac(substract(frac, make_pair(1,smallest_larger_than_frac(frac))));

    while (substract(frac, make_pair(1,smallest_larger_than_frac(frac))).first > 0) {

        //print_frac(substract(frac, make_pair(1,smallest_larger_than_frac(frac))));
        cout << smallest_larger_than_frac(frac) << endl;
        frac = substract(frac, make_pair(1,smallest_larger_than_frac(frac)));

    }

    // print the final substraction, this if isn't really necessary
    if (substract(frac, make_pair(1,smallest_larger_than_frac(frac))).first == 0) cout << smallest_larger_than_frac(frac) << endl;

    return 0;
}
