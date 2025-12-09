#include <iostream>
using namespace std;

// konversi suhu menggunakan input dan tujuan suhu lain menggunakan function 
float konversisuhu(int pilihan, string &label);

int main() {
    int pilihan;
    string label;

    cout << "==============================\n";
    cout << "     PROGRAM KONVERSI SUHU    \n";
    cout << "==============================\n";
    cout << "1.  Farenheit -> Celcius\n";
    cout << "2.  Kelvin    -> Celcius\n";
    cout << "3.  Reamur    -> Celcius\n";
    cout << "4.  Celcius   -> Farenheit\n";
    cout << "5.  Kelvin    -> Farenheit\n";
    cout << "6.  Reamur    -> Farenheit\n";
    cout << "7.  Celcius   -> Reamur\n";
    cout << "8.  Farenheit -> Reamur\n";
    cout << "9.  Kelvin    -> Reamur\n";
    cout << "10. Celcius   -> Kelvin\n";
    cout << "11. Farenheit -> Kelvin\n";
    cout << "==============================\n";
    cout << "Masukkan pilihan (1-11): ";
    cin >> pilihan;

    cout << "------------------------------\n";

    float hasil = konversisuhu(pilihan, label);

    if (label != "") {
        cout << "Hasil konversi (" << label << "): " << hasil << endl;
    }

    cout << "==============================\n";

    return 0;
}

float konversisuhu(int pilihan, string &label) {
    float suhu, hasil = 0;

    switch(pilihan){
        case 1:
            label = "Farenheit ke Celcius";
            cout << "Masukkan suhu (°F): ";
            cin >> suhu;
            hasil = (suhu - 32) * 5.0 / 9.0;
            break;

        case 2:
            label = "Kelvin ke Celcius";
            cout << "Masukkan suhu (K): ";
            cin >> suhu;
            hasil = suhu - 273.15;
            break;

        case 3:
            label = "Reamur ke Celcius";
            cout << "Masukkan suhu (°Re): ";
            cin >> suhu;
            hasil = suhu * 5.0 / 4.0;
            break;

        case 4:
            label = "Celcius ke Farenheit";
            cout << "Masukkan suhu (°C): ";
            cin >> suhu;
            hasil = (suhu * 9.0 / 5.0) + 32;
            break;

        case 5:
            label = "Kelvin ke Farenheit";
            cout << "Masukkan suhu (K): ";
            cin >> suhu;
            hasil = (suhu - 273.15) * 9.0 / 5.0 + 32;
            break;

        case 6:
            label = "Reamur ke Farenheit";
            cout << "Masukkan suhu (°Re): ";
            cin >> suhu;
            hasil = (suhu * 9.0 / 4.0) + 32;
            break;

        case 7:
            label = "Celcius ke Reamur";
            cout << "Masukkan suhu (°C): ";
            cin >> suhu;
            hasil = suhu * 4.0 / 5.0;
            break;

        case 8:
            label = "Farenheit ke Reamur";
            cout << "Masukkan suhu (°F): ";
            cin >> suhu;
            hasil = (suhu - 32) * 4.0 / 9.0;
            break;

        case 9:
            label = "Kelvin ke Reamur";
            cout << "Masukkan suhu (K): ";
            cin >> suhu;
            hasil = (suhu - 273.15) * 4.0 / 5.0;
            break;

        case 10:
            label = "Celcius ke Kelvin";
            cout << "Masukkan suhu (°C): ";
            cin >> suhu;
            hasil = suhu + 273.15;
            break;

        case 11:
            label = "Farenheit ke Kelvin";
            cout << "Masukkan suhu (°F): ";
            cin >> suhu;
            hasil = (suhu - 32) * 5.0 / 9.0 + 273.15;
            break;

        default:
            cout << "Pilihan tidak valid!\n";
            label = "";
            break;
    }

    return hasil;
}
