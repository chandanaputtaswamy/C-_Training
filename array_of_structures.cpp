#include<iostream>
using namespace std;
struct Student{
    int id;
    string name;
    float marks;
};
int main(){
    Student s[3];
    for(int i=0;i<3;i++){
        cout<<"Enter the details of student "<<i+1<<endl;
        cin>>s[i].id>>s[i].name>>s[i].marks;
    }
    cout<<"Student Details:"<<endl;
    for(int i=0;i<3;i++){
        cout<<"ID: "<<s[i].id<<", Name: "<<s[i].name<<", Marks: "<<s[i].marks<<endl;
    }
    return 0;
}