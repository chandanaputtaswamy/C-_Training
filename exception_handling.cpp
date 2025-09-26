#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    try{
        if(b==0){
            throw "Division by zero not allowed";//throw exception
        }
        cout<<"Result: "<<a/b<<endl;
    }
    catch(const char* msg){
        cout<<"Error: "<<msg<<endl;
    }
    cout<<"Program continues after exception handling"<<endl;
    return 0;
}