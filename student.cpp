#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    char grade;
    student(string name,int age,char grade){
        this->name=name;
        this->age=age;
        this->grade=grade;
    }
    void display(){
        cout<<"Student Details:"<<name<<", Age:"<<age<<", Grade:"<<grade<<"\n";
    }
};
int main(){
    student obj1("Ramesh", 17, 'A');
    obj1.display();
    student obj2("Suresh", 18, 'B');
    obj2.display();
    return 0;
}