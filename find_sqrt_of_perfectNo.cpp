#include<iostream>
using namespace std;
class Sqrt{
    public:
    int perfectsqrt(int n){
        int i=1,start=0,end=n,ans=-1;
        
        while(start<=end){
            int mid=(start+end)/2;
            if(mid*mid==n){
                ans=mid;
                return ans;
            }
            else if(mid*mid<n){
                start=mid+1;
            }
            else{
                end=mid-1;
                ans=-1;
            }
        


        } 
        return 0;  
}
};
int main(){
    int n=16;
    Sqrt s;
    s.perfectsqrt(n);
    return 0;
}