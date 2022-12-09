#include <bits/stdc++.h>

using namespace std;

int wartosc_letter(char let) {     // let char

    return let-'A' + 10;

}

int main() {

    fstream file("identyfikator.txt"); int n = 200;
    //fstream file("identyfikator_przyklad.txt"); int n = 20;
    //fstream file("identyfikator_przyklad2.txt"); int n = 1;

    string wagi = "7310731731731731731";

    string id = "";
    for (int i = 0; i < n; i++) {

        int sum = 0;

        file >> id;

        int kontrolna = id[3]-48;       // pierwsza cyfra

        for (int j = 0; j < id.size(); j++) {

            int temp = 0;

            if ((id[j] >= '0' && id[j] <= '9') && j != '4') { // character is a number

                temp = (id[j] - 48) * (wagi[j] - 48);

                sum += temp;

                //cout << id[j] << ": (" << (wagi[j] - 48) << ") " << temp << endl;


            } else {

                sum += wartosc_letter(id[j]) * (wagi[j] - 48);
                //cout << id[j] << ": " << wartosc_letter(id[j]) * (wagi[j] - 48) << endl;

            }

        }

        //cout << id << ":  " << sum << " " << kontrolna << endl;

        if (kontrolna != sum%10) cout << id << endl;       // verfiy "checksum"

    }

    return 0;
}
