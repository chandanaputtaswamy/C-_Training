#include<iostream>
using namespace std;    
class  abc{
    public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }
    /*private:
        void sub(int a,int b){
            cout<<a-b<<endl;
        }
    protected:
        void mul(int a,int b){
            cout<<a*b<<endl;
        }
    */

};
int main(){
    abc obj;
    obj.add(4,5);
    //obj.sub(4,5); error: 'void abc::sub(int, int)' is private within this context
    //obj.mul(4,5); error: 'void abc::mul(int, int)' is protected within this context
    return 0;
}