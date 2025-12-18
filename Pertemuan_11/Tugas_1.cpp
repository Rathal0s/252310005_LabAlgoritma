#include<iostream>
using namespace std;
void tukar(int *x, int *y);

int main(){
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    cout << "\nSebelum pertukaran: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    tukar(&a, &b);

    cout << "\nSetelah pertukaran: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;

}
void tukar(int *x, int *y){
    int c;
    c = *x;
    *x = *y;
    *y = c;
}

