#include<iostream>
using namespace std;
class calculation{
    public:
    int calci(int a, int b){
        return a+b;
    }
    float calci(int a,float b){
        return a-b;
    }
    int calci(int a,int b,int c){
        return a+b+c;
    }
};
int main(){
    calculation ob;
    cout<<ob.calci(2,3)<<endl;
    cout<<ob.calci(2,4.7f)<<endl;//if you don't mention f, it takes it as a double value
    cout<<ob.calci(2,3,4);
    return 0;
}