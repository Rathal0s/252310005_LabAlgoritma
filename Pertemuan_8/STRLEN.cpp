#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char huruf[20];
    char pindah[20];
    //clrscr();

    cout << "Masukkan Sembarang kata= ";
    cin >> huruf;

    cout<< "Panjang kata yang dimasukkan= ";  
    cout << strlen(huruf);

    getchar();
}

/*int main() {
char kalimat[100];

    cout << "Masukkan kalimat: ";
    cin.getline(kalimat, sizeof(kalimat));

    int x = strlen(kalimat);
    cout << "Kalimat Terbalik: ";
    for (int i = x - 1; i >= 0; i--) {
        cout << kalimat[i];
    }
    cout << endl;
    return 0;    
    */