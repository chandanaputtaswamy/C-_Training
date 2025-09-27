// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class BinarySearch{
    public:
    int search(int a[],int key,int start,int end){
        int mid=(start+end)/2;
        while(start<end){
            if(a[mid]==key){
                cout<<mid<<endl;
                return 0;
            } 
        
            if(a[mid]<key) mid-=1;
            else mid+=1;
        }
        cout<<"Search Unsuccessful";
        return 0;
    }
};
int main() {
    int a[]={0,2,4,8,9},key=9,start=0,end=5;
    BinarySearch l;
    l.search(a,key,start,end);
    return 0;
}