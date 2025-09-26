#include<iostream>
using namespace std;
struct Address{
    string city;
    int pincode;
};
struct Student{
    int id;
    string name;
    Address addr; // Nested structure
};
int main(){
    Student s1;
    s1.id=1;
    s1.name="Alice";
    s1.addr.city="Wonderland";
    s1.addr.pincode=123456;
    cout<<s1.name<<" lives in "<<s1.addr.city<<" with pincode "<<s1.addr.pincode<<endl;
    return 0;
}
