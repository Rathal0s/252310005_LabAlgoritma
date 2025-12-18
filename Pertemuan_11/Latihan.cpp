#include<iostream>
using namespace std;

void pangkat(int *num);

int main() {
    int nilai;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> nilai;

    pangkat(&nilai);
    cout << "Nilai setelah pemanggilan fungsi: " << nilai << endl;

}

void pangkat(int *num) {
    *num = (*num) * (*num) * (*num);
}