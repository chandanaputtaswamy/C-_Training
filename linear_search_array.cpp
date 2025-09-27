// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class LinearSearch{
    public:
    int search(int a[],int key){
        for(int i=0;i<5;i++){
            if(a[i]==key){ 
                cout<<i;
                return 0;
            }else{
                cout<<"Element not found"<<endl;
                return 0;
            }
        }
    }
};
int main(){
    int a[]={8,9,4,2,0},key=4;
    LinearSearch l;
    l.search(a,key);
    return 0;
}