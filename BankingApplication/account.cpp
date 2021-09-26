#include <iostream>

#include "account.h"

int Account::acc_no_generator = 1000;

Account::Account(const std::string name, float balance):m_Name(name), m_Balance(balance){
       m_AccNo = ++acc_no_generator;
}

Account::~Account(){
    
}

const std::string& Account::GetName() const{
    return m_Name;
}

float Account::GetBalance() const{
    return m_Balance;
}

int Account::GetAccountNo() const{
    return m_AccNo;
}

void Account::AccumulateInterest(){

}

void Account::Withdraw(float amount){
    if(amount<m_Balance){
        m_Balance -= amount;
    }
    else{
        std::cout<< "Insufficient balance"<<std::endl;
    }
}

void Account::Deposit(float amount){
    m_Balance += amount;
}

float Account::GetInterestRate(){
    return 0.0f;
}

void Account::SetBalance(float amount){
    m_Balance = amount;
}