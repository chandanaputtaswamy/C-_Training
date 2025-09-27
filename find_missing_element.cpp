#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int l=0,h=n-1;
    int start=a[0];
    int missing=-1;
    while(l<=h){
        int mid=(l+h)/2;
        int expected=start+mid;
        if(a[mid]!=expected){
            if(mid==0||a[mid-1]==start+mid-1){
                missing=expected;
                break;
            }
            h=mid-1;
        }else{
            l=mid+1;
        }       
    }
    cout<<"missing element is "<<missing<<endl;
    return 0;
}
