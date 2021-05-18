#include<iostream>

using namespace std;
int main(){
    int a=1,b=2,c=3;
    if(b<a){
        cout<<"B is greater than A"<<endl;
    }
    else if(c<a){
    cout<<"C is greater than A"<<endl;
    }
    else if(a>b){
        cout<<"A is greater than B"<<endl;
    }
    else{
        cout<<"Not if cond. true"<<endl;
    }
    return 0;
}
