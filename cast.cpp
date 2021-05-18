#include<iostream>
using namespace std;
int main(){

    int x=15;
    float y;
    //y=x/2; result is int 
    y=(float)x/2; //cast explicity
    cout <<"Value of Y="<<y<<endl;
    return 0;
}