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
    dog(string s): pet(s){};
    void display(){
        cout<<name<<endl;
    }
};
class cat:public pet{
    public:
    cat(string s):pet(s){};
    void display(){
        cout<<name;
    }
};
int main(){
    pet *p[2];
    p[0]=new dog("Doggy");
    p[1]=new cat("cat");
    p[0]->display();
    p[1]->display();
    delete p[0];
    delete p[1];
    return 0;
}