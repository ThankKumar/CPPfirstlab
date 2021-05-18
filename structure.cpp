#include<iostream>

using namespace std;
 struct student{
     int roll;
     char name[20];
 };
 
 int main(){
     struct student stu;
     cout<<"Enter Roll No=";
     cin>>stu.roll;
     cout<<"Enter name=";
     cin>>stu.name;
     cout<<"Nmae:"<<stu.name<<endl;
     cout<<"Roll:"<<stu.roll<<endl;
     return 0;
 }