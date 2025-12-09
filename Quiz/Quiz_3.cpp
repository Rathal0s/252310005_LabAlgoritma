#include <iostream>
using namespace std;

int main() {

    int nilai[5];
    int total = 0;
    int angka[6];
    int terbesar, terkecil;

    cout <<" Masukan 5 Nilai mahasiswa : " <<endl;
    for (int i = 0; i < 5; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    cout <<" \nDaftar nilai mahasiswa:" <<endl;
    for (int i = 0; i < 5; i++){
            cout <<"Nilai Ke-" <<i + 1 << " = " <<nilai[i] <<endl;
    }

 
    for(int i = 0; i < 5; i++) {
        angka[i] = nilai[i];
    }

    terbesar = angka[0];
    terkecil = angka[0];

    for (int i = 1; i < 5; i++) {
        if (nilai [i] > terbesar)
            terbesar = nilai[i];
        if(nilai[i] < terkecil)
            terkecil = nilai[i];
    }

    float rataRata = (float)total / 5;
    cout << "\nRata-Rata nilai = " <<rataRata;
    cout <<"\nNilai tertinggi = " <<terbesar <<endl;
    cout << "Nilai terendah = " << terkecil <<endl;

    if (rataRata >= 80)
        cout << "Baik Sekali" << endl;
    else if (rataRata >= 70)
        cout << "Baik" << endl;
    else if (rataRata >=60)
        cout << "Cukup" << endl;
    else
        cout << "Kurang" << endl;

    return 0;


}
