#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    char kata [20];
    float angka, a, b;

    cout <<"Masukan angka kata berupa angka = ";
    cin >> kata;

    angka=atoi(kata);
    a = angka + 7;

    cout <<" Hasil dari konversi angka ditambah + 7 = " << a;
    getchar();
}