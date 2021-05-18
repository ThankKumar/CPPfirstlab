#include<iostream>

using namespace std;
int add(int ,int);
int main(){
    int a=10,b=20,sum;
    sum=add(a,b);
    cout<<"Addition="<<sum <<endl;
}
int add(int x, int y){
    int total ;
    total = x+y;
    return(total); 
}
