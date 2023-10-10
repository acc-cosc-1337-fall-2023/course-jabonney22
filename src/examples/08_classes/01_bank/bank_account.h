//bank_account.h
#include<iostream>

class BankAccount{

public://access specifier-other code can access these functions
    // constructor
    BankAccount(){}// no parameters=default constructor
    BankAccount(int b) : balance(b){/*empty class function code*/}
    void deposit(int ammount);
    void withdraw(int amount);
    int get_balance() const {return balance;}

private:// access specifier-onlly this class can access function or varaibles that are private

    int balance{0}; //intialize to zero; happens first

};

void say_hello();
