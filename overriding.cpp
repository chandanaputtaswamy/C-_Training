#include<iostream>
using namespace std;
class parent{
    public:
    virtual void display()
    {
        cout<<"This is parent class"<<endl;
    }   
};
class child:public parent{
    public:
    void display(){
        cout<<"This is child class"<<endl;
    }
};
int main(){
    child ob;
    ob.display();
    parent ob1;
    ob1.display();
    return 0;
}