#pragma once

#include <string>

class Account{
    private:
    std::string m_Name;
    float m_Balance;
    int m_AccNo;
    static int acc_no_generator;

    public:

    Account(const std::string name, float balance);
    virtual ~Account();

    const std::string& GetName() const;
    float GetBalance() const;
    int GetAccountNo() const;

    virtual void AccumulateInterest();
    virtual void Withdraw(float amount);
    void Deposit(float amount);
    float GetInterestRate();
    void SetBalance(float amount);

};