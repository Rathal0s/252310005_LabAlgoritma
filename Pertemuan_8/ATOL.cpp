#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    char kata [20];
    float angka, a;

    cout <<"Masukan angka = ";
    cin >> kata;

    angka=atol(kata);
    a = angka + 8;

    cout <<" Hasil dari konversi angka ditambah 8 = " << a;
    getchar();
}