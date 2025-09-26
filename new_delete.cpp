#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    *p=10  ;
    cout<<*p<<endl;
    cout<<p<<endl; // address of the allocated memory
    delete p; // free the allocated memory  
    cout<<*p<<endl; // undefined behavior
    cout<<p;
    return 0;
}