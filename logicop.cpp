// &&-> and, ||->or, !->not
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=5,b=2,c=5,d=3,opand,opor,opnot;
    opand=((a>b)&&(c>d));
    cout<<opand<<endl;
    opor=((a<b)||(c<d));
    cout<<opor<<endl;
    opnot=!(a>b);
    cout<<opnot<<endl;
}
