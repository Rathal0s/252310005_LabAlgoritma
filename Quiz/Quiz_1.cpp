#include <iostream>
using namespace std;

int main() {

    int n = 20; 
    int angka[n/2]; 
    int b = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            angka[b] = i;
            b++;
        }
    }

    cout << "Deret bilangan genap dari 1 sampai " << n << " adalah:\n";
    for (int i = 0; i < b; i++) {
        cout << angka[i] <<" +" << " ";
    }

    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum += angka[i];
    }
    cout << "\nJumlah semua bilangan genap dari 1 sampai " << n << " adalah: " << sum;

    cout << endl;
    return 0;



}