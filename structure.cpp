#include<iostream>
using namespace std;
struct student{
    int id;
    string name;
    float marks;
};
int  main(){
    student s1;
    s1.id=1;
    s1.name="John";
    s1.marks=85.5;
    cout<<"ID: "<<s1.id<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    return 0;
}