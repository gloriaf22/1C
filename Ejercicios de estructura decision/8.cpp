#include<iostream>
using namespace std;

int main(){
    int l1,l2,l3;
    cin>>l1>>l2>>l3;

    if(l1==l2&&l1==l3){
        cout<<"Equilatero";
    }
    else{
        if(l1==l2||l1==l3||l2==l3)
            cout<<"Isosceles";
        else
            cout<<"Escaleno";
    }
return 0;}
