#include<iostream>
using namespace std;
class area{
    public:
    float calc(int a){
        return 3.142*a*a;
    }
    float calc(int l, int b){
        return l*b;
    }
    float calc(float b,int h){
        return 0.5*b*h;
    }
};
int main(){
    area ob;
    cout<<"Area of circle is "<<ob.calc(4)<<endl;
    cout<<"Area of rectangle is "<<ob.calc(2,3)<<endl;
    cout<<"Area of triangle is "<<ob.calc(3,4)<<endl;
    return 0;
}
