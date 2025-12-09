#include <iostream>
using namespace std;

int faktorial(int a)
{
    int hasil = 1;
    for (int i = 1; i <= a; i++) {
        hasil *= i;
    }
    return hasil;

}

int main()
{
	int x;
	char ulang;
	do 
	{
        cout << "Masukkan Angka : ";
        cin >> x;

        cout << x << "! adalah : " << faktorial(x) << endl;

        cout << "Apakah ingin menghitung lagi? (Y/N) : ";
        cin >> ulang;

    } while (ulang == 'Y' || ulang == 'y');

    cout << "Program Selesai" << endl;

    return 0;
}