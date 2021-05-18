#include<iostream>

using namespace std;
int main(){
    char name[2][20];
    int i;
    for(i=0; i<10; i++){
        cout<<"Enter String=";
        cin>>name[i];
    }
    for(i=0; i<10; i++){
        cout<<name[i]<<endl;
    }
    return 0;
}