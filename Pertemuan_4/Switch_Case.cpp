#include <iostream>
#include <string>
using namespace std;
 int main(){
    char kode;

    cout <<"Masukan Kode Barang [A/B/C] = ";
    cin >> kode;

    switch(kode){
        case 'A' :
        cout <<"Alat Olahraga";
        break;
        case 'B' :
        cout <<"Alat elektronik";
        break;
        case 'C' :
        cout <<"Alat Masak";
        break;
        default:
        cout <<" Anda Salah Memasukan Kode";
        break;
     }
    }
    