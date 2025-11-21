#include<iostream>
#include<math.h>
using namespace std;

int main(){

    char kata [20];
    float angka, a;

    cout <<"Masukan angka = ";
    cin >> kata;

    angka=atof(kata);
    a = angka + 5;

    cout <<" Hasil dari konversi angka ditambah 5 = " << a;
    getchar();
}