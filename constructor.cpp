#include<iostream>
using namespace std;    
class  abc{
    public:
    int c,d;
    abc(int a,int b){
        c=a;
        d=b;
    }
    void add(){
        cout<<c+d<<endl;
    }
    

};
int main(){
    abc obj(4,5);
    obj.add();
    return 0;
}