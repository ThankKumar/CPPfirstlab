#include<iostream>

using namespace std;
int main(){

    int i;
    cout<<"Enter 0 to exit \n\n";
    while(1){
        cout<<"Enter Any Value";
        cin>>i;
        cout<<"You Entered :"<<i<<endl<<endl;
        if(i==0){
            cout<<"program Exit:\n\n";
            break;
        }
    }
    return 0;
}