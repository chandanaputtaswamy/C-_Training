#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;  //pure virtual function
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

int main(){
    Shape *s1=new Circle;
    s1->draw();
    Shape *s2=new Square;
    s2->draw();
    delete s1;
    delete s2;
    return 0;   
}