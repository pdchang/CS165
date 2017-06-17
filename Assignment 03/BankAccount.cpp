/*********************************************************************
 ** Author:Philip Chang
 ** Date: October 12, 2016
 ** Description: Project 3.b - BankAccount.hpp and BankAccount.cpp
 *********************************************************************/
/*********************************************************************
 ** Description:
 **This is the implementation file for BankAccount
 *********************************************************************/

#include "BankAccount.hpp"
#include <string> //includes string since we're using string

BankAccount::BankAccount(std::string name, std::string ID, double balance) //constructor
{
    customerName = name; // sets name customerName to name
    customerID = ID; //sets customerID to ID
    customerBalance = balance; //sets customerBalance to balanace
}
std::string BankAccount::getCustomerName() //getCustername function, returns customerName
{
    return customerName;
}
std::string BankAccount::getCustomerID() //getsCustomerID function, returns customerID
{
    return customerID;
}
double BankAccount::getCustomerBalance() //getsCustomerBalancunction, returns customerBalance
{
    return customerBalance;
}
void BankAccount::deposit(double money) //deposit function, adds deposit input into customerBalance
{
    customerBalance += money;
}
void BankAccount::withdraw(double money)//withrdaw function, subtracts withdraw input from customerBalance
{
    customerBalance -= money;
}


