#include<iostream>
using namespace std;

int main(){
    char cod;
    int importe,historia;
    cout<<"INGRESE NRO HISTORIA CLINICA"<<endl;
    cin>>historia;
    cout<<"INGRESE CODIGO"<<endl;
    cin>>cod;

    switch(cod){
    case 'A':
    case 'a':
        importe=200;
        break;
    case 'D':
    case 'd':
        importe=400;
        break;
    case 'F':
    case 'f':
        importe=600;
        break;
    case 'M':
    case 'm':
        importe=1500;
        break;
    case 'T':
    case 't':
        importe=15000;
        break;
    default:
        cout<<"ERROR 404";
        break;
    }
    cout<<endl<<"H.CLINICA: "<<historia<<"  CODIGO: "<<cod<<"  IMPORTE: "<<importe<<endl;
return 0;}
