//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCCOUNT_H
#define SAVINGS_ACCCOUNT_H

class SavingsAccount: public BankAccount{

public:

    SavingsAccount(){}
    SavingsAccount(int b) : BankAccount(b) {/**EMPTY CODE BLOCK*/}

private:
};

#endif