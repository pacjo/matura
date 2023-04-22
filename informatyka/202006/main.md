[matura arkusze.pl](https://arkusze.pl/matura-informatyka-2020-czerwiec-poziom-rozszerzony/)

# zad 1
## 1.1
Lp. | n | Tablica A | Tablica B | k | Odpowiedź
----|---|-----------|-----------|---|----------
5 | 5 | [1, 2, 3, 4, 5] | [3, 4, 5, 1, 2] | 2 | **PRAWDA**
6 | 9 | [1,1,1,1,3,1,1,1,1] | [3,1,1,1,1,1,1,1,1] | **4** | PRAWDA
7 | 6 | [4, 2, 4, 4, 2, 6] | [4, 4, 2, 6, 4, 2] | 1 | **FAŁSZ**

## 1.2
[kod](cz1/1/12.cpp)

funkcja:
```
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
```

kod, żeby działało tak jak w zadaniu, bo funkcja która zwraca boola jest lepsza niż taka, co zwraca stringa `PRAWDA`/`FAŁSZ`:
```
if (czy_k_podobne(n, A, B, k))
    cout << "PRAWDA" << endl;
else
    cout << "FAŁSZ" << endl;
```

## 1.3
[kod](cz1/1/13.cpp)

te same uwagi co w 1.2. kod w pliku powyżej


# zad 2
## 2.1
przepisujemy na komputer, bo można
[kod](cz1/2/21.cpp)

a | b | sym (a, b)
--|---|------------
3 | 1 | 3 4 3 3 3 4 3
4 | 2 | 5 8 5 9 5 8 5 8 5 8 5 9 5 8 5
3 | 3 | 5 8 5 9 5 8 5
4 | 1 | 4 6 4 6 4 6 4 4 4 6 4 6 4 6 4

## 2.2
[kod](cz1/2/22.cpp)

a | b | sym (a, b)
--|---|------------
3 | 2 | 7
4 | 4 | 15
5 | 1 | 31
6 | 6 | 63
10 | 2020 | 1023

ale te liczby wyglądają na potęgi 2 (dokładnie: $2^a -1$), więc na pewno można prościej, mimo to moim kodem jest ciekawiej i bardziej uniwersalnie

# zad 3
## 3.1
1. F
2. P
3. P
4. F

## 3.2
[kod](cz1/3/32.cpp), bo można

1. F
2. P
3. F
3. P

## 3.3
1. P
2. P
3. ~~F~~
4. F

## 3.4
1. F
2. P
3. P
4. F


# zad 4
## 4.1
[kod](cz2/4/41.cpp)

## 4.2
[kod](cz2/4/42.cpp)

## 4.3
[kod](cz2/4/43.cpp)


# zad 5
[plik ms access](cz2/5/jezyki.accdb)


# zad 6
[plik excel](cz2/6/statek.xlsx)