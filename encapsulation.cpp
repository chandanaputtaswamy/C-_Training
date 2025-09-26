/*
#include<iostream>
using namespace std;
class abc{
    private:
    int a,b;
    public:
    abc(int a,int b){
        this->a=a;
        this->b=b;
    }   
    void display(){
        cout<<a<<b<<endl;
    }
};
int main(){
    abc obj(4,5);
    obj.display();
    return 0;
}
    */
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollNo;
    public:
    void setName(string n){
        name=n;
    }
    void setRoll(int r){
        rollNo=r;
    }
    string getName(){
        return name;
    }
    int getRollNo(){
        return rollNo;
    }
};
int main(){
    Student s;
    s.setName("Ramesh");
    s.setRoll(101);
    cout<<"Name: "<<s.getName()<<"\n";
    cout<<"Roll No: "<<s.getRollNo()<<"\n";
    return 0;
}