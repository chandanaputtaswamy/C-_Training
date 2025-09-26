#include<iostream>
using namespace std;
union Data{
    int i;
    float f;
    char ch;
};
int main(){
    Data d;
    d.i=10;
    cout<<"Integer: "<<d.i<<endl;
    d.f=220.5;
    cout<<"Float: "<<d.f<<endl; // Overwrites previous value
    d.ch='A';
    cout<<"Character: "<<d.ch<<endl; // Overwrites previous value
    cout<<"Now Integer: "<<d.i<<endl; // Value is now undefined(Gives a garbage value)
    cout<<"Now Float: "<<d.f<<endl; // Value is now undefined
    return 0;
}