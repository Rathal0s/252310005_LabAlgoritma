#include<iostream>
using namespace std;

struct buku{
string judul;
string penerbit;
int tahun_terbit;
}buku1, buku2;

int main(){
    // cout<<"Masukan data buku 1:" <<endl;
    // cout<<"Judul: ";
    // cin>>buku1.judul;
    // cout<<"Penerbit: ";
    // cin>>buku1.penerbit;
    // cout<<"Tahun Terbit: ";
    // cin>>buku1.tahun_terbit;
    // cout<<endl;

    // cout<<"Masukan data buku 2:" <<endl;
    // cout<<"Judul: ";
    // cin>>buku2.judul;
    // cout<<"Penerbit: ";
    // cin>>buku2.penerbit;
    // cout<<"Tahun Terbit: ";
    // cin>>buku2.tahun_terbit;
    // cout<<endl;

    // cout<<"Data Buku 1:"<<endl;
    // cout<<"Judul: " <<buku1.judul<<endl;
    // cout<<"Penerbit: " <<buku1.penerbit<<endl;
    // cout<<"Tahun Terbit: " <<buku1.tahun_terbit<<endl;
    // cout<<endl;

    // cout<<"Data Buku 2:"<<endl;
    // cout<<"Judul: " <<buku2.judul<<endl;
    // cout<<"Penerbit: " <<buku2.penerbit<<endl;
    // cout<<"Tahun Terbit: " <<buku2.tahun_terbit<<endl;
    // cout<<endl;

    int n =10;
    buku bukuArray[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Masukan data buku "<<i+1<<":" <<endl;
        cout<<"Judul: ";
        cin>>bukuArray[i].judul;
        cout<<"Penerbit: ";
        cin>>bukuArray[i].penerbit;
        cout<<"Tahun Terbit: ";
        cin>>bukuArray[i].tahun_terbit;
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Data Buku "<<i+1<<":" <<endl;
        cout<<"Judul: " <<bukuArray[i].judul<<endl;
        cout<<"Penerbit: " <<bukuArray[i].penerbit<<endl;
        cout<<"Tahun Terbit: " <<bukuArray[i].tahun_terbit<<endl;
        cout<<endl;
    }

}