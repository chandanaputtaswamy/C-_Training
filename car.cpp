#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    int speed;
    car(string brand, int speed){
        this->brand=brand;
        this->speed=speed;
    }
    void display(){
        cout<<"Brand: "<<brand<<"\nSpeed: "<<speed<<" km/h\n";
    }
};
int main(){
    car ob1("Maserati", 120);
    ob1.display();
    car ob2("BMW", 150);
    ob2.display();
    return 0;
}