#include<iostream>

using namespace std;
inline int add(int a, int b){
    return(a+b);
}
int main(){
    int x=10,y=20;
    cout<<add(x,y)<<endl; //function calling
    return 0;
}