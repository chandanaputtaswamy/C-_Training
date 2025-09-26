#include<iostream>
using namespace std;
class book{
    public:
    string title,author;
    int price;
    book(){
        title="unknown";
        author="unknown";
        price=0;
    }
    book(string title,string author,int price){
        this->title=title;
        this->author=author;
        this->price=price;
    }
    void display(){
        cout<<"Title: "<<title<<"\nAuthor: "<<author<<"\nPrice: "<<price<<"\n";
    }
};
int main(){
    book b1;
    b1.display();
    book b2("God of War","Rina Kent",456);
    b2.display();
    return 0;
}