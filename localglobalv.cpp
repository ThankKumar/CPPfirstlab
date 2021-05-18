#include<iostream>

using namespace std;
int a=10;//global variavble access all program
int main(){
    int b=20;// local variable access in the fubnction
    cout<<"value of A="<<a<<endl;
    cout<<"Value of B="<<b<<endl;
    return 0;
}