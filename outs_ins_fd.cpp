
// ;leacture 5
#include<iostream>

using namespace std;
class student;
{
    private:
    int roll;
    char name[20];
    public:
    void getdata();
    void display();
    {
        cout<<"name Of student:\n"<<endl;
        cout<<"Roll:\n"<<endl;
    }
};
void student :: getdata(void){
cout<<"Enter Name:\n";
cin>>name;
cout<<"Roll:\n"
cin>>roll;
}
int main(){
    student stu;
    stu.roll =101;
    stu.getdata();
    stu.display();
    return 0;
}