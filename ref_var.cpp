#include<iostream>

using namespace std;

int main(){
    int a=10;
    int &nicka =a;
    
cout<<"Value of a:="<<a<<endl;
cout<<"Value of nick="<<nicka<<endl;
cout<<"Address of a:="<<&a<<endl;
cout<<"Value of nicka:="<<&nicka<<endl;
return 0;
}
