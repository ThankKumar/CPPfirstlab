#include<iostream>

using namespace std;
int main(){

    int n;
    for(n=1; n<=10; n++){
        if(n==8 ){
            continue;
        }
    cout<<n<<'\n';
    }
    return 0;
}