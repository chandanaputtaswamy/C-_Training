//here you are using the concept of composition instead of inheritance i.e., using class as a data type only


#include<iostream>
using namespace std;
class Animal{
    public:
    string display(){
        return " an animal\n";
    }   
};
class cat{
    public:
    Animal a;
    void show(){
    cout<<"cat is"<<a.display(); 
    }   
};
int main(){
    cat c;
    c.show();
    return 0;
}