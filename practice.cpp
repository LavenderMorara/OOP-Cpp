#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    public:
    string accountHolderName;
    double balance;

    // BankAccount(){
    //     accountHolderName = "Chiya Morara";
    //     balance = 0.0;
    // }

    // BankAccount(string n = "Betty Chelagat"){
    //     accountHolderName = n;
    //     balance = 0.0;
    // };

    BankAccount(string n){
        accountHolderName = n;
        balance= 900.0;
    };

    BankAccount(const BankAccount &b){
        accountHolderName = b.accountHolderName;
        balance  = b.balance;
    };
    void deposit(double b){
        balance += b;
        cout<<b<<endl;
    };

    void displayBalance(){
        cout<<accountHolderName<<" :"<<balance<<endl;
    }

    ~BankAccount(){
        cout<<"Account for "<<accountHolderName<< " deleted"<<endl;
    };
};

int main (){
    BankAccount b1("Linda Morara");
    cout<<"Account created for "<< b1.accountHolderName<<endl;
    b1.deposit(3000.0);
    b1.displayBalance();

    BankAccount b2 = b1;
    cout<<"Account created for "<< b2.accountHolderName<<endl;
    // b1.deposit();
    b1.displayBalance();

    return 0;
};