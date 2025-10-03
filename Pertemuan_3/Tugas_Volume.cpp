#include <iostream>
using namespace std;

int main() {
    double r, t, volume;
    const double pi = 3.14159;


    cout << "Mencari Volume Tabung " <<endl;
    cout << "Masukkan jari-jari tabung: ";
    cin >> r;

    cout << "Masukkan tinggi tabung: ";
    cin >> t;

    volume = pi * r * r * t;

    cout<<"Rumus mencari Volume = pi * r * r * t"<<endl;
    cout << pi << " x " << r << " x " << r << " x " << t << endl;
    cout << "Volume tabung = " << volume << endl;

    return 0;
}
