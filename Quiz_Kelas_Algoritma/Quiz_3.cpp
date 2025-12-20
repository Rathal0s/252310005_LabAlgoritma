#include <iostream>
#include <string>
using namespace std;

string kalimat;
int jumlah_kalimat = 0;

int main() {
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);


    for (int i = 0; kalimat[i] != '\0'; i++) {
        if (kalimat[i] == ' ') {
            jumlah_kalimat++;
        }
    }
    jumlah_kalimat++; 

    cout << "Jumlah kalimat dalam string tersebut adalah: " 
         << jumlah_kalimat << endl;

    return 0;
}
