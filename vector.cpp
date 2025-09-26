/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={10,20,30};
    v.push_back(40);
    v.push_back(50);
    cout<<"Vector elements are:"<<endl;
    for(int x:v) cout<<x<<" ";
    cout<<endl<<"size: "<<v.size()<<endl;
    return 0;
}
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v{10,5,3,6,7,8,2,1,4,9};
    v.push_back(20);
    v.push_back(30);

    sort(v.begin(),v.end()); // Sort the vector in ascending order
    cout<<"Vector elements after sorting:"<<endl;
    for(int x:v) cout<<x<<" ";

    sort(v.begin(),v.end(),greater<int>()); // Sort the vector in descending order

    cout<<endl<<"Vector elements after sorting in descending order:"<<endl;
    for(int x:v) cout<<x<<" ";
    reverse(v.begin(),v.end()); // Reverse the vector
    cout<<endl<<"Vector elements after reversing:"<<endl;

    cout<<"Vector elements are:"<<endl;
    for(int x:v) cout<<x<<" ";
    cout<<endl<<"size: "<<v.size()<<endl;
    return 0;
}