#include "savings.h"

Savings::Savings(const std::string& name, float balance, float rate):Account(name, balance),m_Rate(rate){

}

Savings::~Savings(){

}


float Savings::GetInterestRate() const{
    return m_Rate;
}

void Savings::AccumulateInterest(){
   float amount = 0;
   amount = Account::GetBalance();
   amount+= amount*m_Rate;
   Account::SetBalance(amount);
}