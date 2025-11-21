#include <iostream>
#include <string.h>
using namespace std;
 int main(){

    char huruf[20], pindah[20];
    //clrscr();

    cout << "Masukkan Sembarang kata= ";
    cin >> huruf;

    //manggiil dan disebut ulang
    //huruf dan menjadi pindah

    /* Proses */
    strcpy(pindah, huruf);
    cout << "Kata yang dipindahkan= " << pindah;
    getchar();
 }