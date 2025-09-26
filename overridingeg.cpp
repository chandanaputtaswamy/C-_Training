#include<iostream>
using namespace std;
class Person{
    public:
    virtual void role(){
        cout<<"This is a person"<<endl; 
    }
};
class student:public Person{
    public:
    void role(){
        cout<<"This is a student"<<endl;
    }
};
class Teacher:public Person{
    public:
    void role(){
        cout<<"This is a teacher"<<endl;
    }
};
int main(){
    Person *p=new student;
    p->role();
    Person *p1=new Teacher;
    p1->role();
    Person p2;
    p2.role();
    return 0;
}



/*#include<iostream>
using namespace std;
class Shape{
    public:
    void draw(){
        cout<<"Drawing Shape"<<endl;
    }  
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};
class Square:public Shape{
    public:
    void draw(){
        cout<<"Drawing Square"<<endl;
    }
};
class Triangle:public Shape{
    public:
    void draw(){
        cout<<"Drawing Triangle"<<endl;
    }
};
int main(){

}
*/