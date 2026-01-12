//Inheritance - OOP feature that allows a class(derived/child ) class to access data members from another class(base/parent).
//feature - allows reuse  - allows heirarchical design of classes
//syntax
// class BaseClass {
//      base members
// };

// class DerivedClass : accessSpecifier BaseClass {///the access specifier can be public, private or protected; public is most common.
//     derived members
// };

//Acces specifiers in Inheritance - we have 3 access specifiers ; public, protected and private
//The indicated access specifier determines how data members from the base class will appear in the derived class
///ie if we have public access specifier, public and protected data members from parent class will appear as public in child/derived class and  private is inaccessible
// class Derived : public Base {
// };
///ie if we have protected access specifier, public and protected data members from parent class will appear as protected in child/derived class and  private is inaccessible
// class Derived : public Base {
// };
///ie if we have private access specifier, public and protected data members from parent class will appear as protected in child/derived class and  private is inaccessible
// class Derived : private Base {
// };
///Note: private members of a base class are never accessible in child classes

//Types of inheritance
//1.Single inheritance - occurs when one derived class inherits from only one base class
// syntax
// class A {
//     // base class
// };

// class B : public A {/*there could be more subsequest classes each inheriting from the former...ie inheritance happens step by step
//     // derived class
// };
//example
// #include <iostream>
// #include <string>
// using namespace std;

// class Vehicle{
//     public:
//     string brand;
// };

// class Car : public Vehicle{
//     public:
//     int year;
// };

// class ElectricCar : public Car{
//     public:
//     int batteryCapacity;
// };

// int main(){
//     ElectricCar e;
//     e.brand="BMW";
//     e.year = 2021;
//     e.batteryCapacity = 709;
//     cout<<e.brand<<" "<<e.year<<" "<<e.batteryCapacity<<endl;
//     return 0;
   
// };

//2.Multiple inheritance - Occurs when a single derived class inherits from multiple base classes.
//syntax
// class A {
// };

// class B {
// };

// class C : public A, public B {
// };
//example
// #include <iostream>
// #include <string>
// using namespace std; 

// class Teacher{
//     public:
//     void teach(){
//         cout<<"The lesson has been taught"<< endl;
//     };
//     void present(){
//         cout<<"The teacher presented the lesson"<<endl;
//     };
// };

// class Researcher{
//     public:
//     void research(){
//         cout<<"The subject has been researched"<<endl;
//     };
//     void present(){
//         cout<<"The researcher presented the research"<<endl;
//     };
// };
// /* so classes Teacher and Reasearcher both have a method called present*/
// /*such a scenario cause ambiguity  which is resolved by indicating the class whn calling the method as shown below*/
// /* syntax - //  object.ClassName::method()*/

// class Professor :public Teacher, public Researcher{

// };

// int main (){
//     Professor p;
//     p.teach();
//     p.research();
//     p.Teacher::present();
//     p.Researcher::present();
//     return 0;
// };

//The diamond problem - this occurs in multiple inheritance where 2 derived classes iherit from the same base class and  a derived class iherits from both of them creating duplicates of the initial base class in the final derived class.
//Diagramatic representation of diamond problem
    //     A
    //    / \
    //   B   C
    //    \ /
    //     D
    // B & C inherit from A, and D inherits from B & C, creating duplicate copies of A in D.
 //Solution to diamond problem - it is resolved using virtual base classes
 //Virtual base class -  ensures only one shared copy of base class exists even in multiple inheritance; used when inheriting from same base class.
 //syntax
// class A {
// public:
//     string name;
// };

// class B : virtual public A {
// };

// class C : virtual public A{
// };

// class TeachingAssistant : public B, public C {
// };

//Constructor order with virtual base classes
// 1.Virtual base classes
// 2.Non-virtual base classes
// 3.Derived classes
//example

// #include <iostream>
// #include <string>
// using namespace std;

// class Device{
//     public:
//     void anything(){
//         cout<<"waetfgds"<<endl;
//     };
// };
// class Phone : public virtual Device{

// };
// class Computer : public virtual Device{

// };
// class SmartDevice : public Phone, public Computer{

// };

// int main (){
//     SmartDevice sd;
//     sd.anything();
//     return 0;
// };

