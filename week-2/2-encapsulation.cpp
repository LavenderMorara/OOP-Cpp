//Encapsulation- bundling data members; variables, properties and methods into a class and controlling their access.
// example
#include <iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    double balance;   // hidden from outside

public:
    string name;
    double amount;

    void setBalance(double b = 0){ //setter - public methods that allow for setting and updating of values of private data members.
       if (balance >= 0){
        balance = b;
       }else{
        cout<<"Invalid balance"<<endl;
       }
    }

    double getBalance(){ //getter - public methods that return the value of private data members.
        return balance;
    }

    BankAccount(string n){
        name = n;
    }
    void deposit(double amount) {
        if(amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) balance -= amount;
        
    }

};

int main (){
    BankAccount b("Lavender Morara");
    b.setBalance();
    cout<<b.name<<" : "<<b.getBalance()<<endl;
    b.deposit(49000);
    cout<<"Amount deposited"<<" : "<<b.getBalance()<<endl;
    b.withdraw(5000);
    cout<<"After withdrawal balance is"<<" : "<<b.getBalance()<<endl;

    return 0;
};
