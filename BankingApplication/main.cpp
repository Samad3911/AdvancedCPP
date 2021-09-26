#include <iostream>

#include "checking.h"
#include "savings.h"

using namespace std;

int main()
{
    Checking ch("Abdul", 900);
    std::cout<<"Initial balance: "<<ch.GetBalance()<<std::endl;
    ch.Withdraw(950);
    std::cout<<"Balance after withdrawing: "<<ch.GetBalance()<<std::endl;
    ch.Withdraw(90);
    std::cout<<"Balance after withdrawing: "<<ch.GetBalance()<<std::endl;
    return 0;
}