//Polymorphism - is an OOP concept where a base class pointer can refer to different derived class objects and invoke different implementations of the same virtual function at runtime.
//So we can have basic polymorphism where we won't have parameters and have to write the specific function anew in each class and we can also parametise it to have less repetition
//syntax
//1. Basic polymorphism
// class Base{
//     public:
//     virtual void sound(){
//         cout<<"Animal makes a sound"<<endl;
//     }
// }

// class Dog : public Base{
//      void sound(){
//         cout<<"Dog barks "<<endl;
//      }
// }

// class Cat : public Base{
//     vod sound(){
//         cout<<"Cat meows"<<endl;
//     }
// }
// int main(){
// Animal* a = new Dog();
// a->speak();
// return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
    virtual void draw(){
        cout<<"Drawing a generic shape"<<endl;
    };
};

class Circle : public Shape{
    public : 
    void draw(){
        cout<<"Drawing a circle"<<endl;
    };
};

class Square : public Shape{
    public: 
    void draw(){
        cout<<"Drawing a square"<<endl;
    };
};

// int main(){
//     Shape* s = new Circle();
//     // s->draw();
//     Shape*s1 = new Square();
//     // s1->draw();
//     return 0;
// };
//Polymorphism with parameters - create a data member, create a function that takes the variable as a parameter and have the variable printed out by virtual function so that in each child class you call the first function and pass the output as a parameter then when calling printing the output in main function call the vitual function
// syntax
// class Animal {
// protected:
//     string sound;

// public:
//     Animal(string s) {
//         sound = s;
//     }

//     virtual void speak() {
//         cout << sound << endl;
//     }
// };
// class Dog : public Animal {
// public:
//     Dog() : Animal("Dog barks") {}
// };
// int main (){
//     Animal* a = new Dog();
//     a->speak();
//     return 0;
// }
//example
class Animal{
    public :
    string sound;
    Animal(string s){
        sound =s;
    };
    virtual void makeSound(){
        cout<<sound<<endl;
    }
};
class Lion : public Animal{
    public:
    Lion() : Animal("Roar"){}
};

class Elephant : public Animal{
    public:
    Elephant() : Animal("Trumpet"){}
};

class Monkey : public Animal{
    public:
    Monkey() : Animal("Chatter"){}
};
// int main(){
//     Animal* a = new Lion();
//     Animal* a1 = new Elephant();
//     Animal* a2 = new Monkey();
//     a->makeSound();
//     a1->makeSound();
//     a2->makeSound();
//     return 0;
// };


//Method overriding - A function in the base class is redefined in a derived class to provide class-specific behavior, enabling polymorphism.
// syntax - same as polymorphism except for the override keyword which is optional btw
// class Base {
// public:
//     virtual void functionName() {  // virtual recommended
//         // base class behavior
//     }
// };

// class Derived : public Base {
// public:
//     void functionName() override {  // optional 'override' keyword
//         // derived class behavior
//     }
// };
//example
class Animal2{
    public :
    
    virtual void makeSound(){
        cout<<"Some generic animal sound"<<endl;
    }
};
class Lion2 : public Animal2{
    public:
    void makeSound() override{
        cout<<"Roar"<<endl;
    }
};

class Elephant2 : public Animal2{
    public:
   void makeSound() override{
        cout<<"Trumpet"<<endl;
    }
};

class Monkey2 : public Animal2{
    public:
    void makeSound() override{
        cout<<"Chatter"<<endl;
    }
};
// int main(){
//     Animal2* a = new Lion2();
//     Animal2* a1 = new Elephant2();
//     Animal2* a2 = new Monkey2();
//     a->makeSound();
//     a1->makeSound();
//     a2->makeSound();
//     return 0;
// };
//Abstraction - process of hiding unnecessary implementation details and only showing essential features to user.
//syntax
// #include <iostream>
// using namespace std;

// class Shape2{                 // abstract class
// public:
//     virtual void draw() = 0;  // pure virtual function ie. has no out put and is equal to 0
// };
// class Circle2 : public Shape2 {
// public:
//     void draw() override {       // override the abstract method - output is defined in the child class; unique to each
//         cout << "Drawing a circle" << endl;
//     }
// };
// int main() {
//     Shape2* s = new Circle2();   // base class pointer to derived object
//     s->draw();                 // Output: Drawing a circle
//     return 0;
// }
//example
class Vehicle{
    public:
    virtual void startEngine()= 0;
};

class Car2 : public Vehicle{
    public:
    string brand;
    Car2(string b){
        brand = b;
    }
    void startEngine() override{
        cout<<brand<<" car engine started"<<endl;
    };
};

class Motorcycle : public Vehicle{
    public:
    void startEngine()override{
        cout<<"motorcycle engine started"<<endl;
    };
};

int main(){
    Vehicle* v = new Car2("Toyota");
    Vehicle* v2 = new Motorcycle();
    v->startEngine();
    v2->startEngine();
    return 0;
};

