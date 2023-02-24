#include<iostream>
using namespace std;

int main(){
    int cod,cant;
    int importe=0;
    cout<<"INGRESE CODIGO"<<endl;
    cin>>cod;
    cout<<"INGRESE CANTIDAD"<<endl;
    cin>>cant;
    switch (cod){
    case 1:
        importe=cant*10;
        break;
    case 10:
        importe=cant*10;
        break;
    case 100:
        importe=cant*10;
        break;
    case 2:
        if(cant>=10){
            int diezU=cant/10;
            int resto=cant%10;
            importe=diezU*65+resto*7;
        }
        else
            importe=cant*7;

        break;
    case 22:
        if(cant>=10){
            int diezU=cant/10;
            int resto=cant%10;
            importe=diezU*65+resto*7;
        }
        else
            importe=cant*7;
        break;
    case 222:
        if(cant>=10){
            int diezU=cant/10;
            int resto=cant%10;
            importe=diezU*65+resto*7;
        }
        else
            importe=cant*7;
        break;
    case 3:
        if(cant>10){
            int total=cant*3;
            importe=total-(total*10/100);
        }
        else
            importe=cant*3;
        break;
    case 33:
        if(cant>10){
            int total=cant*3;
            importe=total-(total*10/100);
        }
        else
            importe=cant*3;
        break;
    case 4:
        importe=cant*2;
        break;
    case 44:
        importe=cant*2;
        break;
    default:
        cout<<"ERROR";
        break;
    }
    cout<<endl<<"ARTICULO: "<<cod<<"  CANTIDAD: "<<cant<<"  IMPORTE A PAGAR: "<<importe<<endl;
return 0;}
