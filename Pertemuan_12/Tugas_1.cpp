#include <iostream>
using namespace std;

struct Mahasiswa {
    float tugas;
    float praktikum;
    float uts;
    float uas;
    float rataRata;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan nilai tugas: ";
    cin >> mhs.tugas;

    cout << "Masukkan nilai praktikum: ";
    cin >> mhs.praktikum;

    cout << "Masukkan nilai UTS: ";
    cin >> mhs.uts;

    cout << "Masukkan nilai UAS: ";
    cin >> mhs.uas;

    mhs.rataRata = (mhs.tugas + mhs.praktikum + mhs.uts + mhs.uas) / 4;

    cout << "\nRata-rata nilai: " << mhs.rataRata << endl;

    if (mhs.rataRata >= 90) {
        cout << "Nilai: A" << endl;
    } else if (mhs.rataRata >= 80) {
        cout << "Nilai: B" << endl;
    } else if (mhs.rataRata >= 70) {
        cout << "Nilai: C" << endl;
    } else if (mhs.rataRata >= 60) {
        cout << "Nilai: D" << endl;
    } else {
        cout << "Nilai: E" << endl;
    }

    return 0;
}
