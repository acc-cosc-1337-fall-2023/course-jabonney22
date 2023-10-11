//bank_account.h
#include<iostream>
#include<stdlib.h>//access rand() function

//class header guards
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount{

friend void show_balance(BankAccount& account);

public://access specifier-other code can access these functions
    // constructor
    BankAccount(){get_balance_from_db();}// no parameters=default constructor
    BankAccount(int b) : balance(b){/*empty class function code*/}
    void deposit(int ammount);
    void withdraw(int amount);
    int get_balance() const {return balance;}

private:// access specifier-onlly this class can access function or varaibles that are private

    int balance{0}; //intialize to zero; happens first
    void get_balance_from_db();
};



void say_hello();

#endif

