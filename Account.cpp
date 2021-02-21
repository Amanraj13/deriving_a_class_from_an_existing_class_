//
// Created by Aman on 21-02-2021.
//

#include "Account.h"
#include<iostream>

Account::Account() {

}

Account::~Account() {

}

void Account::deposit(double amount) {
    std::cout<<"\nAccount deposit called with"<<amount<<std::endl;
}

void Account::withdraw(double amount) {
    std::cout<<"\nAccount withdraw called with"<<amount<<std::endl;
}
