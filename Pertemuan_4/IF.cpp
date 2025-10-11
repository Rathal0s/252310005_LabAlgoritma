#include <iostream>
#include <string>
using namespace std;
 int main(){
    double total_beli, potongan=0, jum_bayaran=0;

    cout <<"Total Pembelian Rp. ";
    cin >> total_beli;

    if(total_beli >= 50000)
        potongan = 0.2*total_beli;

        else
        potongan = 0.05 * total_beli;
            
        cout <<" Besar Potongan Rp." << potongan <<endl;


    jum_bayaran = total_beli - potongan;

    cout <<" Jumlah yang harus dibayarkan Rp." << jum_bayaran;

    getchar();
}