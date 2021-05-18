#include<iostream>

using namespace std;
int main(){
int n;
for(n=1; n<=10; n--)
{
    cout<<n<<'\t';
    if(n==7)
    {
        cout<<"count down aborted!";
        break;
    }
}
    cout<<'\n';
    return 0;
}