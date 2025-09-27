#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> dl;
    list <int> dl2={10,20,30};
    dl.push_back(10);
    dl.push_back(20);
    dl.push_front(5);

    auto it=dl.begin();
    advance(it,1); // Move iterator to 3rd position
    dl.insert(it,15); // Insert 15 at 3rd position
    return 0;
}