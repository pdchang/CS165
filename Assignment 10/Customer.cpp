/*********************************************************************
 ** Author:Philip Chang
 ** Date:December 2, 2016
 ** Description: Project 10.b - Implementation file for Customer
 *********************************************************************/
#include "Customer.hpp"

Customer::Customer(std::string n, std::string a, bool pm)//constructor that sets name, account ID and if is premiumMember
{
    name = n;
    accountID = a;
    premiumMember = pm;
}
std::string Customer::getAccountID() //get method returns accountID
{
    return accountID;
}
std::vector<std::string> Customer::getCart()//get method returns cart
{
    return cart;
}
void Customer::addProductToCart(std::string id)//function that adds product to cart by pushing string id onto cart vector
{
    cart.push_back(id);
}
bool Customer::isPremiumMember() //bool function returns premium member
{
    return premiumMember;
}
void Customer::emptyCart() //function that empties cart by using clear
{
    cart.clear();
}
