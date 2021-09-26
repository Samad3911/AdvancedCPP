#pragma once
#include "account.h"

class Checking : public Account{
    public:
    using Account::Account;                           // as we don't have any member variable inside Checking class we can directly inherit Account class constructor
    //Checking(const std::string& name, float balance);
    ~Checking();
    void Withdraw(float amount) override;
};