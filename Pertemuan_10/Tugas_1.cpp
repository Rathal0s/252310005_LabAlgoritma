#include <iostream>
using namespace std;

int jumlahKarakter(string kalimat, char target);

int main() {
    string kalimat;
    char target;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    cout << "Karakter apa yang ingin dihitung? : ";
    cin >> target;

    int hasil = jumlahKarakter(kalimat, target);
    cout << "Jumlah karakter yang dicari adalah : " << hasil << endl;
    return 0;
}

int jumlahKarakter(string kalimat, char target) {
    int count = 0;
    for (char c : kalimat) {
        if (c == target) {
            count++;
        }
    }
    return count;
}
