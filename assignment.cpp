#include<iostream>
using namespace std;

main(){

    int m=15,a,b,c,d;
    m=m+10;
    cout<<"Value of M="<<m<<endl;
    a=m-=10;
    cout<<"Value of a="<<a <<endl;
    b=m*=10;
    cout<<"Value of M="<<b<<endl;
    c=m/=10;
    cout<<"Value of M="<<c<<endl;
    d=m%=10;
    cout<<"Value of M="<<d<<endl;
}