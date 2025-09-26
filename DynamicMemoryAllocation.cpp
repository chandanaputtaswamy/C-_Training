#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    int *arr=new int[n]; // dynamically allocate array
    cout<<"Enter "<<n<<" values:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"You entered:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr; // free the allocated memory
    return 0;
}