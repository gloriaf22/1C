#include<iostream>

using namespace std;

int main(){
    float n1,n2,superficie;
    cin>>n1>>n2;
    superficie=n1*n2;

    if(superficie<100)
    {
        superficie=superficie*100;
        cout<<superficie<<" mm2";
    }
    else{
        superficie/=10000;
        cout<<superficie<<" m2";
    }
return 0;}
