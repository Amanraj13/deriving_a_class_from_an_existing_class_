//
// Created by Aman on 21-02-2021.
//

#ifndef NEW_SAVINGS_ACCOUNT_H
#define NEW_SAVINGS_ACCOUNT_H
#include "Account.h"


class Savings_Account: public Account{
public:
    Savings_Account();
    ~Savings_Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif //NEW_SAVINGS_ACCOUNT_H
