//SET UP
// 1. Do the normal repo creation on github and clone to terminal before opening in vs code.
// 2. Open repo in vscode; first order of business is creating a build folder where g++ will store the code after converting it from 
// human readable code to machine language. You only need 1 build folder in a repo provided it holds a single project
// 3. Make your files normally using ; touch file_name.cpp eg. touch basics.cpp
// 4. Open the file and write you code then save.
// 5. Compile using the following command; g++ folder/file_name.cpp -o build/text-file_name or  g++ file_name.cpp -o build/text-file_name; if the file is not in a folder
// eg. g++ week1/basics.cpp -o build/week1_basics
// 6. then run the code in the file using the following command; ./build/text-file_name  eg.  ./build/week-1_basics

//BASICS
//1. Data types - tells C++ what kind of data a variable can store, and what operations are allowed.
    // 1. int - whole numbers eg int age = 4;
    // 2. float - less precise decomals ie those that are rounded off etc.
    //    eg. float height = 172.6;
    // 3. double - more precise decimals ; usually longer eg. double pi = 3.141592653;
    // 4. char - used when the data is a single character;  enclosed in single quotes eg. char grade = 'A';
    // 5. string = text; enclosed in double quotes eg. string name = "Chiya";
    // 6. bool = boooleans ie. true/false eg bool isStudent = true;  

//2. Variable declarations
//syntax
// data-type_of-value-stored varibale_name = value ;
// eg. string name = "Chiya";
//-constant variable - must be declared using const and requires the value upon declaration
//syntax
//  const data-type_of-value-stored VARIABLE_NAME = value ;
// eg. const double  PI = 3.1459;
// A variable that is not a constant can be declared without being initialised by assigning a value
// ie data-type variable_name; eg. int x ; then the value is assigned later
// ie variable-name = value; eg. x = 4;

//3. Operators 
// a) arithmetic                      b)assignment operators
// +   -addition                        = - assigns values to variables
// -   -subtraction                     += - x += 5 ie x=x+5
// *   -multiplication                  -= - x -= 5 ie x=x-5
// /   -division                        *= - x *= 5 ie x=x*5
// %   - remainder (modulus)            /= - x /= 5 ie x=x/5

// c)comparison operators                  d)Logical operators
// == - equal to                          && - AND
// != - not equal to                      || - OR
// > - greater than                       !  - NOT
// < - less than 
// >= - greater than or equal to
// <= - less than or equal to

//4. Basic c++ Syntax
#include <iostream> //- allows input/ output referenced in cout and cin
using namespace std; //- helps avoid referencing std repeatedly in the code eg. std :: cout

int main(){//- main() is the main entry point of every c++ program; where program begins running and in plave of int you cna have the data type of the value the
//  function returns
    cout << "Hello World !" << endl;
    cout<< "Hello World\n";
    //cout prints output on like console.log() or print
    //endl moves cursor to the next line like <br> in html and flashes output buffer(sends everything currently stored in buffer to screen immediately).\n facilitates
    //  the same action; c++ initially stores output in buffers before printing it endl hastens the printing
    //eg. cout<< "Hello World\n";
    return 0;//appears when the program ends successfully
}