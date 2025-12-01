#include <iostream>
using namespace std;

int main() {
    char kode[10];
    int harga[10], jumlah[10], total = 0, n;
    

    cout <<"   GEROBAK FRIED CHICKEN"<<endl;
    cout <<"==============================="<<endl;
    cout <<"Kode | Jenis Potong | Harga    "<<endl;
    cout <<"==============================="<<endl;
    cout <<" D   | Dada         | 2500     "<<endl;
    cout <<" P   | Paha         | 2000     "<<endl;
    cout <<" S   | Sayap        | 1500     "<<endl;
    cout <<"==============================="<<endl<<endl;

    cout <<"Banyak jenis yang dibeli : ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout <<"\nJenis ke-" << i+1 << endl;
        cout <<"Jenis Potong (D/P/S) : ";
        cin >> kode[i];
        cout <<"Banyak Potong        : ";
        cin >> jumlah[i];

        if(kode[i]=='D' || kode[i]=='d')
            harga[i]=2500;
        else if(kode[i]=='P' || kode[i]=='p')
            harga[i]=2000;
        else if(kode[i]=='S' || kode[i]=='s')
            harga[i]=1500;
        else {
            harga[i]=0;
            cout <<"Kode tidak valid! harga = 0\n";
        }

        total += harga[i] * jumlah[i];
        
    }

    
int pajak = total * 0.1;
   
    cout <<"\t     GEROBAK FRIED CHICKEN \n";
    cout <<"---------------------------------------------------\n";
    cout <<"No\tJenis\tHarga\tBanyak\tTotal\n";
    cout <<"---------------------------------------------------\n";

    for(int i=0;i<n;i++){
        cout << i+1 << "\t" << kode[i] << "\t"  << harga[i] << "\t" << jumlah[i] << "\t" << harga[i] * jumlah[i] << endl;
    }

    cout <<"---------------------------------------------------\n";
    cout <<"\t\tTotal Harga    : " << total << endl;
    cout <<"\t\tPajak (10%)    : " << pajak << endl;
    cout <<"\t\tTotal Bayar    : " << total + pajak << endl;
    cout <<"===================================================\n";

    return 0;
}
