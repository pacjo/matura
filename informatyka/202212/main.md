[matura arkusze.pl](https://arkusze.pl/matura-probna-informatyka-2022-grudzien-poziom-rozszerzony/)

# zad 1
## 1.1
[kod](1/11.cpp)
```
5030

Process returned 0 (0x0)   execution time : 0.032 s
Press any key to continue.
```

## 1.2
[kod](1/12.cpp)
```
B 1001:1004

Process returned 0 (0x0)   execution time : 0.039 s
Press any key to continue.
```

## 1.3
[kod](1/13.cpp)
```
6 B 15

Process returned 0 (0x0)   execution time : 1.700 s
Press any key to continue.
```


# zad 2
## 2.1
[kod](2/21.cpp)

przepisujemy i odpalamy, wejście: `1 10` (`x`, `n`) i dostajemy:
```
1 10
strzalka: 1->2
strzalka: 2->4
strzalka: 4->8
strzalka: 4->9
strzalka: 2->5
strzalka: 5->10
strzalka: 1->3
strzalka: 3->6
strzalka: 3->7

Process returned 0 (0x0)   execution time : 1.496 s
Press any key to continue.
```
rysunek wychodzi prawidłowy

## 2.2
[kod](2/22.cpp)

dla N = 20: **19**

dla dowolnego N: **N-1**

## 2.3
[kod](2/23.cpp)

generujemy wyjście dla x = 1 i n = 2047, potem ctrl+f i liczymy strzałki

można też z pomocą matematyki:
$$
2047 = 2048 - 1 = 2^{11}-1 \\
\downarrow
$$
więc jest to "poziom" 10, a więc 10 strzałek

odp: **10**

## 2.4
[kod](2/24.cpp)
```
47 3044
7650 61204
1 245
7 63669
9125 18250
5 43246

Process returned 0 (0x0)   execution time : 0.475 s
Press any key to continue.
```


# zad 3
## 3.1
```
SITO[1] ← FAŁSZ
dla i = 2, 3, ..., N
    SITO[ i ] ← PRAWDA
dla i = 2, 3, ... , N
    jeżeli SITO[ i ] = PRAWDA
        j ← i*i
        dopóki j ≤ N wykonuj
            SITO[ j ] ← FAŁSZ
            j ← j + i
```

## 3.2
[kod](3/32.cpp)
```
21

Process returned 0 (0x0)   execution time : 0.214 s
Press any key to continue.
```

## 3.3
[kod](3/33.cpp)

wolne, **bardzo wolne** ale raczej działa

## 3.4
[kod](3/34.cpp)
```
0:32
1:26
2:37
3:31
4:43
5:25
6:28
7:23
8:38
9:28
A:45
B:33
C:29
D:23
E:44
F:10

Process returned 0 (0x0)   execution time : 0.414 s
Press any key to continue.
```



# zad 4
[plik excel](4/ekodom.xlsx)


# zad 5
[plik ms access](5/hotel.accdb)

## 5.4
```
SELECT uslugi_dodatkowe.rodzaj, count(uslugi_dodatkowe.data_pobytu)
FROM uslugi_dodatkowe
GROUP BY uslugi_dodatkowe.rodzaj;
```

## 5.5
```
SELECT klienci.imie, klienci.nazwisko, SUM(uslugi_dodatkowe.cena_uslugi)
FROM (uslugi_dodatkowe INNER JOIN noclegi ON uslugi_dodatkowe.id_pobytu = noclegi.id_pobytu) INNER JOIN klienci ON klienci.nr_dowodu = noclegi.nr_dowodu
GROUP BY klienci.imie, klienci.nazwisko;
```


# zad 6
Protokół wysyłania poczty elektronicznej: **SMTP**

Protokół przesyłania plików: **FTP**

Szyfrowany protokół przesyłania dokumentów hipertekstowych: **HTTPS**

Protokół odbierania poczty elektronicznej: **IMAP**


# zad 7
1. P
2. F


# zad 8
działanie w systemie czwórkowym | wynik w systemie czwórkowym | wynik działania w systemie szesnastkowym
--------------------------------|-----------------------------|------------------------------------------
$3211_4 + 2322_4$ | $12133_4$ | $19F_{16}$
$3211_4 - 2322_4$ | $223_4$ | $2B_{16}$