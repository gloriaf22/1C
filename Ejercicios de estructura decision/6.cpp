#include<iostream>
using namespace std;

int main(){
    int d1,m1,a1;
    int d2,m2,a2;
    cout<<"1- INGRESE DIA MES ANIO (DD MM AAAA)"<<endl;
    cin>>d1>>m1>>a1;
    cout<<"2- INGRESE DIA MES ANIO (DD MM AAAA)"<<endl;
    cin>>d2>>m2>>a2;

    if(a1>a2)
        cout<<d1<<"/"<<m1<<"/"<<a1;
    else{
        if(a1==a2){
            if(m1>m2)
                cout<<d1<<"/"<<m1<<"/"<<a1;
            else{
                if(m1==m2){
                    if(d1>d2)
                        cout<<d1<<"/"<<m1<<"/"<<a1;
                    else
                        cout<<d2<<"/"<<m2<<"/"<<a2;
                }
                else
                    cout<<d2<<"/"<<m2<<"/"<<a2;
            }
        }
        else
            cout<<d2<<"/"<<m2<<"/"<<a2;
    }
//    int a1,a2;
//    cout<<"INGRESE DOS FECHAS (AAAAMMDD)"<<endl;
//    cin>>a1>>a2;
//
//    if(a1>a2)
//        cout<<a1;
//    else
//        cout<<a2;
return 0;}
