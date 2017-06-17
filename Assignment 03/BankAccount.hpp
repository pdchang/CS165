/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 12, 2016
 ** Description: Project 3.b - BankAccount.hpp and BankAccount.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the header file for BankAccount
 *********************************************************************/
//header
#ifndef BANKACCOUNT_HPP //guards
#define BANKACCOUNT_HPP
#include <string> // includes string because using string
//class declaration
class BankAccount
{
private:
    std::string customerName; //private member variables
    std::string customerID;
    double customerBalance;
public:
    std::string getCustomerName(); // member function prototypes
    std::string getCustomerID();
    double getCustomerBalance();
    void deposit(double money);
    void withdraw(double money);
    BankAccount(std::string name, std::string ID, double balance);
};
#endif
