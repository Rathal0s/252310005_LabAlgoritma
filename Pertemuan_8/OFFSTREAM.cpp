#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream myfile;
    myfile.open("Test.exe", ios::app);

    cout << "Operasi File Offstream" << endl;
    cout <<" -------------------------- " << endl;

    if (!myfile.fail())
    {
        myfile <<"Belajar OPERASI FILE OFFSTREAM"<< endl;
        myfile.close();
        cout << "File Berhasil Ditulis" << endl;
    }
    else
    {
        cout << "File Tidak Ditemukan" << endl;
    }
    getchar();
    return 0;
}