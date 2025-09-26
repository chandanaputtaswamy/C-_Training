#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void start()=0;  
};
class Car:public Vehicle{
    public:
    void start(){
        cout<<"Car is starting"<<endl;
    }
};
class Bike:public Vehicle{
    public:
    void start(){
        cout<<"Bike is starting"<<endl;
    }
};
int main(){
    Vehicle *v1=new Car;
    v1->start();
    Vehicle *v2=new Bike;
    v2->start();
    delete v1;
    delete v2;
    return 0;   
}