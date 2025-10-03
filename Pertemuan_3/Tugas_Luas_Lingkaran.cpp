#include <iostream>
using namespace std;

int main() {
    double r, luas;
    const double pi = 3.14159;

    cout<<"Mencari Luas Lingkaran"<<endl;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    luas = pi * r * r;
    cout <<"Rumus Luas Lingkaran : pi x r x r"<<endl;
    cout << pi << " x " << r << " x " << r << endl;
    cout << "Luas lingkaran Adalah = " << luas << endl;

    return 0;
}
