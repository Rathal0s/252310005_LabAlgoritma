#include <iostream>
#include <string>
using namespace std;

string kalimat;
int jumlah_huruf = 0;

int main() {
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; kalimat[i] != '\0'; i++) {
        if (kalimat[i] != ' ') {
            jumlah_huruf++;
        }
    }

    cout << "Jumlah huruf dalam string tersebut adalah: " 
         << jumlah_huruf << endl;

    return 0;
}
