/*#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
};
class student:public person{
    public:
    string sname="A";

};
class teacher:public person{
    public:
    string tname="B";
    
};
class teachingAssistant:public student,public teacher{
    public:
    void teachAssistant(string tname,string sname){
        cout<<"Teacher Name: "<<tname<<"\nStudent Name: "<<sname<<"\n";
    }
};
int main(){
    teachingAssistant ta;
    ta.teachAssistant("socrates","aristotle");
    return 0;
}

*/

#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    Person(string n){name=n;}
};
class Student:public Person{
    public:
    int rollno;
    Student(string n,int r):Person(n){rollno=r;}
    void display(){
        cout<<"Name: "<<name<<"\nRoll: "<<rollno<<"\n";
    }
};
int main(){
    Student s("Ramesh",101);
    s.display();
    return 0;
}   