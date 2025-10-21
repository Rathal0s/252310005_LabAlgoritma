#include <iostream>
using namespace std;

int main() {
    int angka;
    char ulang;

    do {
        cout << "Masukkan sebuah bilangan: ";
        cin >> angka;
        
        int hasil = 1;
        int i = 1;

        while (i <= angka) {
            hasil *= i;
            i++;
        }

        cout << angka <<"!" << " adalah: " << hasil << endl;

        cout << "Apakah Anda ingin menghitung lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai." << endl;

    return 0;
}
