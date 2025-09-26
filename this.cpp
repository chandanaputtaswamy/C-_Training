#include<iostream>
using namespace std;    
class  abc{
    public:
    int a,b;
    abc(int a,int b){//parameterized constructor
        this->a=a;
        this->b=b;
    }
    void add(){
        cout<<a+b<<"\n";
    }
    

};
int main(){
    abc obj(4,5);
    obj.add();
    return 0;
}