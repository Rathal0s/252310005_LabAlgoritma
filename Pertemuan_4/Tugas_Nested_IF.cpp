#include <iostream>
#include <string>
using namespace std;

int main() {
    string siswa;
    int n1, n2, n3;

    cout << "Nama Siswa : ";
    getline(cin, siswa);
    cout << "Nilai Pertandingan I : ";
    cin >> n1;
    cout << "Nilai Pertandingan II : ";
    cin >> n2;
    cout << "Nilai Pertandingan III : ";
    cin >> n3;

    int r = (n1 + n2 + n3) / 3;
    cout << "Nilai Rata-Rata " << siswa << " Adalah " << r << " Dari Hasil Perlombaan" << endl;

    if (r >= 75) {  
        if (r >= 85) {
            cout << "Hadiah: Komputer Core i5" << endl;
        } else {
            cout << "Hadiah: Uang sebesar Rp. 2.500,000" << endl;
        }
    } else {
        cout << "Hadiah: Hiburan" << endl;
    }

    getchar();
}
