#include<iostream>
using namespace std;

void tambah(int m, int n);

int main()
{int a, b;
a = 5;
b = 9;

cout <<"Nilai sebelum pemanggilan fungsi tambah : " << endl;
cout <<"a = " << a <<" b = "<<b<< endl;

tambah(a,b);

cout <<"Nilai setelah pemanggilan fungsi tambah : " << endl;
cout <<"a = " << a <<" b = "<<b<< endl;
return 0;


}

void tambah(int m, int n)
{
    m += 5;
    n += 7;
    cout <<"Nilai di dalam fungsi tambah : " << endl;
    cout <<"m = " << m <<" n = "<<n<< endl;
}

