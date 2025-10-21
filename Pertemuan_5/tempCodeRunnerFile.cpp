#include <iostream>
using namespace std;

int main() {
    int a = 5; // lebar belah ketupat
    int i, j;

    cout << endl;

    // 🔸 Bagian atas
    for (i = 1; i <= a; i++) {
        // Bintang kiri
        for (j = 1; j <= a - i; j++) {
            cout << "*";
        }

        // Spasi tengah
        for (j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }

        // Bintang kanan
        for (j = 1; j <= a - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // 🔸 Bagian bawah
    for (i = 1; i <= a; i++) {
        // Bintang kiri
        for (j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spasi tengah
        for (j = 1; j <= 2 * (a - i) + 1; j++) {
            cout << " ";
        }

        // Bintang kanan
        for (j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
