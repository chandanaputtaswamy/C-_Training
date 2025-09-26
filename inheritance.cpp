#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating ";
    }

};
class Dog: public Animal{
    public:
    void bark(string a){
        cout<<a<<endl;
    }
};
int main(){
    string a;
    cout<<"Enter a message:";
    getline(cin,a);//you can also use getline(cin,a) to take input with spaces
    Dog obj;
    obj.eat();
    obj.bark(a);
    return 0;
}
