//Object - is an instance of a class; it reps real world entities
//syntax
// className object_name; or classNmae object(arg(s))
//  eg.
//  Student s;
//  or
//  Student s("Chiya");//here object is created using constructor

//Accessing object members
//1.Accessing data members
//syntax
// objectName.variable_name;
//2.Accessing methods
// objectName.method_name();

//example
#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
    string title;
    int pages;
 
    Book(string t, int p){
        title = t;
        pages = p;
    }
    void showDetails(){
        cout << title<<" "<<"has " <<pages<< " "<<"pages"<<endl;
    }
};

int main (){
    Book b("Till The End Of Time", 254);
    Book b2("The In Between", 203);
    b.showDetails();
    b2.showDetails();
};