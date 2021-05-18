#include<iostream>

using namespace std;
void age(int&,int&);
int main(){
    int rani=10,amit=20;
    age(rani,amit);
    cout<<"Rani Age=\n"<<rani<<endl;
    cout<<"Amit Age=\n"<<amit<<endl;
    return 0;
}
void age(int &r,int&a){
    r=50;
    a=30;
}
