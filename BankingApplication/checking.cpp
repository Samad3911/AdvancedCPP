#include <iostream>

#include "checking.h"

/*Checking::Checking(const std::string& name, float balance):Account(name, balance){

}*/

Checking::~Checking(){

}

void Checking::Withdraw(float amount){
    float balance = Account::GetBalance();
    if(balance < 50)
    std::cout<< "Insufficient balance"<<std::endl;
    else if((balance - amount) < 50)
    std::cout<< "Insufficient balance"<<std::endl;
    else{
    Account::Withdraw(amount);
    }

}