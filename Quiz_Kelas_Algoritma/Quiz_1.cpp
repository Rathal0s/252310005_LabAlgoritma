#include <iostream>
#include <string>
using namespace std;

string kalimat;
int jumlah_Kata = 0;

void balikKalimat(string kalimat, string &hasil) {
    hasil = "";

    int panjang = 0;
    while (kalimat[panjang] != '\0') {
        panjang++;
    }

    for (int i = panjang - 1; i >= 0; i--) {
        hasil += kalimat[i];
    }
}

int main() {
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; kalimat[i] != '\0'; i++) {
        if (kalimat[i] == ' ') {
            jumlah_Kata++;
        }
    }
    jumlah_Kata++; 

    cout << "Jumlah kata dalam string tersebut adalah: " << jumlah_Kata << endl;

    string hasil;
    balikKalimat(kalimat, hasil);

    cout << "Kalimat setelah dibalik: " << hasil << endl;

    if (kalimat == hasil) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
