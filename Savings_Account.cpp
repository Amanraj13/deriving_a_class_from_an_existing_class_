//
// Created by Aman on 21-02-2021.
//

#include "Savings_Account.h"
#include<iostream>

Savings_Account::Savings_Account() {

}

Savings_Account::~Savings_Account() {

}

void Savings_Account::deposit(double amount) {
    std::cout<<"\nSaving Account deposit called with"<<amount<<std::endl;
}

void Savings_Account::withdraw(double amount) {
    std::cout<<"\nSaving Account withdraw called with"<<amount<<std::endl;
}