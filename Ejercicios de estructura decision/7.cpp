#include <iostream>
using namespace std;

int main(){
    int l1,l2,l3;
    cin>>l1>>l2>>l3;
    if(l1>l2 && l1>l3){
        if(l1<l2+l3)
            cout<<"Forman triangulo";
        else
            cout<<"No forman triangulo";
    }
    else{
        if(l2>l1 && l2>l3){
            if(l2<l1+l3)
                cout<<"Forman triangulo";
            else
                cout<<"No forman triangulo";
        }
        else{
            if(l3<l2+l1)
                cout<<"Forman triangulo";
            else
                cout<<"No forman triangulo";
        }
    }

return 0;}
