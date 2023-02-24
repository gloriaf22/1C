#include<iostream>
using namespace  std;

int main(){
    int nro;
    cin>>nro;
    if(nro/10000==nro-(nro/10)*10){
        if(((nro/1000)-(nro/10000)*10)==(nro/10)-(nro/100)*10)
            cout<<"CAPICUA";

    }
return 0;}
