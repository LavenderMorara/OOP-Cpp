// class - is a user-defined data type that groups data into variables and functions and
//  is used as a blueprint for objects
// no memory is allocated to classes, only to instances of the class; objects

//  Syntax
//  class ClassName{
//     data members
//  };
//example
//  #include <string> /*-be sure to be including this line when validating data that's a string since string is not built in*/
//  class Book{
//     string title;
//     int price;
// };

//Access specifiers - define where class members; variables and methods, can be accessed from
//1. private access specifier - data can't be accessed from outside the class;class data is private by default hence you don't have to explicitly specify it.
//2. public acces specifier - data can be accessed externally by objects of the class
//3. protected acces specifier - data can be accessed within the class and by derived child classes
// #include <string>
// class Car{
//     public:
//     string make;
//     private:
//     string model;
//     protected:
//     int year;
// };

//Method - functions defined within a class that operates on class members and defines the behaviour of objects
//syntax
// class className{
//     public:
//     void function_name(){
//         block_code;
//     }
// };

//Constructor - special method publicly declared with its identifier being the class name and whose responsibility is to assign values to object attributes during instantiation.
//chracteristics -same name as class name
                //  -declared as public
                //  -has no return type; void/int 
                //  -used for initialisation of objects
                //  -automatically executed during instantiation
//syntax
// class ClassName{
//     public:
//     ClassName(){
//         constructor_body
//     }
// };                
// example constructors
// 1.default constructors-construcors that take no arguments and initialises all its abjects with preset values.
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee{
//     public:
//     string name;
//     int salary;

//     Employee(){/*when a constructor is defined as so, all objects instantiated will have the same values for name ans salary*/
//         name = "Chiya";
//         salary = 30000;
//     }
// };

// int main(){/*main must always return int ; it must have zero as return value so that a zero response shows successful completion of process and vice versa; it doesnt print values in db, function do*/
//     Employee e;/*this is used in stead of e = Employee() which is what is used in python*/
//     cout << e.name << endl;/*the above is done in place of def __init__(self): self.name=name self.salary=salary*/
//     cout << e.salary << endl;
//     Employee e1;
//     cout << e1.name << endl;
//     cout << e1.salary << endl;
//     return 0;
// };


//2.Copy constructor - a special constructor that creates a new object as a copy of an existng object ie. the values assigned are copied through the new copy example under parametised constructors
// 3.1  Parameterised constructors-has no default values or arguments and values are assigned upon instantiation
// #include <iostream>
// #include <string>
// using namespace std;

// class Car{
//     public:
//     string brand;
//     int year;
//     double price;

//     Car(string b, int y, double p){
//         brand = b;
//         year = y;
//         price = p;
//     }
    
//     Car(const Car &c){/*this is the copy constructor, & is used to reference the existing object, const is used to ensure read only access to referenced object*/
//         brand = c.brand;
//         year = c.year;
//         price = c.price;
//     }
// };

// int main(){
//     Car c1("Volvo", 2004, 4000000.0);
//     cout <<c1.brand<<" "<<c1.year<<" "<<c1.price<< endl;
//     Car c2 = c1;
//     cout <<c2.brand<<" "<<c2.year<<" "<<c2.price<< endl;
//     return 0 ;
// };
// 3.2  Constructor with default arguments- this provides forassigning values and in the case values is not assigned, the default values is used
// #include <iostream>
// #include <string>
// using namespace std;

// class Product{
//     public:
//     string name;
//     double price;

//     Product(string n= "bites", double p = 430.0){/*in the instance that only one member ahs a default argument, despite the order in which it was listed on the class definition, as an argument have the defaule being the last in the constructor parenthesis*/
//         // ie Product(double p, string n = "bites") then define them in reference to the members in the class
//        name = n;
//        price = p;
//     }
// };
// int main(){
//     Product p;
//     cout << p.name << " " << p.price << endl;
//     Product p1("juice",350.0);
//     cout << p1.name << " " << p1.price << endl;
//     Product p2("soda");
//     cout << p2.name << " " << p2.price << endl;
   
//     return 0;
// };

//Deconstructors - special finction of a class tha tis automatically called when an object is destroyed.
//Functions: -Release recources before object is remocved from memory.
         //  - Perform clean up  "     "
         //  -Close connections "      "
//characteristics: - uses same name as class but preceded by tilde(~).
                //    - takes no Parameters.
                //    -no return type 
                //    -automatically called when object goes out of scope or program ends.

//Syntax
// class ClassName {
// public:
//     ~ClassName() {
//         // cleanup code
//     }
// };
#include <iostream>
#include <string>
using namespace std;

class FileHandler{
    public:
    string filename;

    FileHandler(string f){
        filename = f;
        cout << f <<" "<< "opened"<< endl;
    
    }

    ~FileHandler(){
        cout << filename << " "<< "closed"<< endl;/*be sure to  use the actual attribute name here since it takes no parameters*/
    }
};
int main(){
    FileHandler f1("Movie");
    FileHandler f2("Music");
    return 0;
};
