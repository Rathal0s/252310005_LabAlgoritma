#include <iostream>
using namespace std;

int main(){

int a ,b, c=0, d=0;
cout << "operasi Perkalian" << endl;
cout << " Masukan Nilai a = ";
cin >> a;

cout <<"Masukan Nilai B= ";
cin >>b;

c = a % b;
d = a * b;

cout <<"Hasil dari C = A % B = " <<c <<endl;
cout <<"Hasil dari D = A * B =" <<d;

getchar();
}