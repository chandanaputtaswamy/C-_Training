#include<iostream>
using namespace std;
class pet{
    public:
    string name;
    pet(string s){
        name=s; 
    }
    virtual void display()=0;
};
class dog:public pet{
    public:
    dog(string s):pet(s){}
    void display(){
        cout<<name<<"\n";
    }
};
class cat:public pet{
    public:
    cat(string s):pet(s){}
    void display(){
        cout<<name<<"\n";
    }
};
int main(){
    pet *p[2];
    p[0]=new dog("Dog");
    p[1]=new cat("cat");
    p[0]->display();
    p[1]->display();    
    return 0;
}