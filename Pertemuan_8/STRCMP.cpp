#include<iostream>
#include<string.h>
using namespace std;
 int main(){

    char a1[]="IBIK";
    char a2[]="IbiK";
    char b1[]="IBIK";

    cout<<"Perbandingan a1 dan a2: "<<strcmp(a1,a2)<<endl;

    cout<<"Perbandingan a2 dan a1: "<<strcmp(a2,a1)<<endl;

    cout<<"Perbandingan a1 dan b1: "<<strcmp(a1,b1)<<endl;

    getchar();


 }