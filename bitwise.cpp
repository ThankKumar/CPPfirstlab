#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int a=10,b=20,c=5,logicand,logicor,logicxor,btleft,bright;
    logicand=a+b+c;
    cout<<"logicand\n"<<logicand<<endl;
    logicor=(a+b)/c;
    cout<<"logicor\n"<<logicor<<endl;
    //logicand=(a+b)c;
    //cout<<"logicand"<<logicand<<endl
    logicxor=(a+b)^c;
    cout<<"logicxor\n"<<logicxor<<endl;
    btleft=(a+b)<<c;
    cout<<"bleft\n"<<btleft<<endl;
    bright=(a+b)>>c;
    cout<<"bright\n"<<bright<<endl;
}
