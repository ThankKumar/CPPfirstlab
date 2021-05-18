#include<iostream>

using namespace std;
int main(){
    int a=10;
    int *p;
    p = &a;
    *p=20;
    cout<<"Address of A\n"<<p<<endl;
    cout<<"Value of A\n"<<*p<<endl;

    return 0;

}