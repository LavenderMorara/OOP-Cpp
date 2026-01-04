//Method - this is a function that is defined within a class and is used to carry out operations on the data members of the class.

//Need for methods
//-perform operations on data members
//-control access to data
//-rep real world behaviours

//syntax
// class ClassName{
//     access_specifier:
//     return_type method_name(param){
//         method_body;
//     }
// };

// it is called using 
// object.method_name();

// ie. 
// int main (){
//     ClassName C;
//     c.method_name();
//     return 0;
// };

//example
#include <iostream>
#include <string>
using namespace std;

class Student{
   public:
   string name;
   int marks;

   Student(string n, int m ){
    name = n;
    marks = m;

   }
   void displayResult(){
    cout << name << " has scored" << " "<<marks <<endl;
   }
};

int main (){
    Student s("Chiya", 99);
    s.displayResult();
};