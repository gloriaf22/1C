#include<iostream>
using namespace std;

int main(){
    int mes,anio;
    cout<<"INGRESE MES (MM) Y ANIO (AAAA)"<<endl;
    cin>>mes>>anio;

    if(anio%4==0){
        switch(mes){
        case 2:
            cout<<"29";
            break;
        }
    }
    else{
        switch(mes){
        case 1:
            cout<<"31";
            break;
        case 3:
            cout<<"31";
            break;
        case 5:
            cout<<"31";
            break;
        case 7:
            cout<<"31";
            break;
        case 8:
            cout<<"31";
            break;
        case 10:
            cout<<"31";
            break;
        case 12:
            cout<<"31";
        break;
        case 2:
            cout<<"28";
        break;
        case 4:
            cout<<"30";
        break;
        case 6:
            cout<<"30";
        break;
        case 9:
            cout<<"30";
        break;
        case 11:
            cout<<"30";
        break;
        }
    }
return 0;}
