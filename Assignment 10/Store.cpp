/*********************************************************************
 ** Author:Philip Chang
 ** Date:December 2, 2016
 ** Description: Project 10.b - Implementation file for Store
 *********************************************************************/
#include "Store.hpp"
#include <cctype>
#include <iostream>
#include <iomanip>

void Store::addProduct(Product *p)//add product by using product pointer to push it onto inventory vector
{
    inventory.push_back(p);
}
void Store::addMember(Customer *c)//add customer by using customer pointer to push it on to members vector
{
    members.push_back(c);
}
Product* Store:: getProductFromID(std::string proId)//function that finds string in the inventory
{
    for(int i = 0; 0 < inventory.size(); i++) //for loop that goes through inventory using size to find size of inventory
    {
        if(inventory[i]->getIdCode() == proId)//using getIdCode function to find the ID code from products in inventory
        {
            return inventory[i];//if idCode matches proID, it will return the product in the inventory
        }
    }
    return NULL; //returns NULL if it finds nothing
}
Customer* Store::getMemberFromID(std::string mId)//function that finds customer ID from string
{
    for(int i = 0; i < members.size(); i++) //for loop goes thorugh members using size to find size of members
    {
        if(members[i]->getAccountID() == mId)//using getAccountId function to find ID code from customers in members
        {
            return members[i]; //when ID matches the string parameter it will return the Customer
        }
    }
    return NULL; //returns NULL if finds nothing
}
void Store::productSearch(std::string str)//void function that finds product
{
    std::string tempS = str; //creating another string and set it string parameter
    std::string up = str;//creating string variable to set it to string parameter
    std::string tu = str;//creating string variable to set it to string parameter
    tempS[0] = toupper(up[0]); //turns first char of up to upper case and sets tempS to it
    tu[0] = tolower(up[0]); //turns first char to lower case and sets Tu to it
    
    
    for (int i = 0; i < inventory.size(); i++)//for lop that goes through the inventory
    {
        std::size_t found1 = (inventory[i]->getTitle()).find(str);//using string find function and setting variables to them
        std::size_t found2 = (inventory[i]->getTitle()).find(tempS);
        std::size_t found3 = (inventory[i]->getTitle()).find(tu);
        
        std::size_t founda = (inventory[i]->getDescription()).find(str);
        std::size_t foundb = (inventory[i]->getDescription()).find(tempS);
        std::size_t foundc = (inventory[i]->getDescription()).find(tu);
        //if loop with conditions to cout the information if it matches the title/description first case insensitive
        if((found1 != std::string::npos) || (found2 != std::string::npos) || (found3 != std::string::npos) || (founda != std::string::npos) || (foundb != std::string::npos) || (foundc != std::string::npos))
        {
            std::cout << inventory[i]->getTitle() << std::endl;
            std::cout << "ID code: " << inventory[i]->getIdCode() << std::endl;
            std::cout << "price: " << inventory[i]->getPrice() << std::endl;
            std::cout << inventory[i]->getDescription() << std::endl;
        }
    }
}
void Store::addProductToMemberCart(std::string pID, std::string mID)//void function that adds product to member cart
{
    if (getProductFromID(pID) == NULL) // if no product from ID is found then cout not found
    {
        std::cout << "Product #" << pID << " not found." << std::endl;
    }
    if (getMemberFromID(mID) == NULL) //if no product from ID is found then cout not found
    {
        std::cout << "Member #" << mID << " not found." << std::endl;
    }
    //else if product ID is found but quanity available is zero and ID is not null and product is not null, then cout out of stock
    else if (getProductFromID(pID)->getQuantityAvailable() == 0 && getMemberFromID(mID) != NULL && getProductFromID(pID) != NULL)
    {
        std::cout << "Sorry, product #" << pID << " is currently out of stock." << std::endl;
    }
    else //else using getMemberfromId with string parameter and using addProductToCart function
    {
        getMemberFromID(mID)->addProductToCart(pID);
    }
}
void Store::checkOutMember(std::string mID) //void function that checks out members
{
    double subtotal = 0; //accumulator
    double ship; //declaring ship
    double total; //declaring total
    if (getMemberFromID(mID) == NULL) //if member not found it cout not found
    {
        std::cout << "Member #" << mID << " not found." << std::endl;
    }
    else //else meaning if member is found
    {
        if (((getMemberFromID(mID)->getCart()).size()) == 0) //if the cart size of customer is zero it outputs no items in cart
        {
            std::cout << "There are no items in the cart." << std::endl;
        }
        else //if there are things in the cart
        {
        for (int i = 0; i < ((getMemberFromID(mID)->getCart()).size()); i++)//for loop to go through cart
        {
            //if item in cart has more than zero quantity available
            if(((getProductFromID((getMemberFromID(mID)->getCart())[i]))->getQuantityAvailable()) > 0)
            {
                //couts out product name and price then adds price to subtotal then decrease quantity by 1
                std::cout << getProductFromID((getMemberFromID(mID)->getCart())[i])->getTitle() << " - ";
                std::cout << "$" << getProductFromID((getMemberFromID(mID)->getCart())[i])->getPrice() << std::endl;
                subtotal += getProductFromID((getMemberFromID(mID)->getCart())[i])->getPrice();
                (getProductFromID((getMemberFromID(mID)->getCart())[i]))->decreaseQuantity();
            }
            else//if item has no more available couts out product # is no longer available
            {
                std::cout << "Sorry, product #" << (getProductFromID((getMemberFromID(mID)->getCart())[i]))->getIdCode();
                std::cout << ", is no longer available" << std::endl;
            }
            
        }
        if((getMemberFromID(mID)->isPremiumMember()) == true) //if customer is premium member
        {
            ship = 0; //ship cost is zero
        }
        else
        {
            ship = .07 * subtotal; //else meaning customer is not premium, ship cost is 7% of subtotal
        }
        
        total = ship + subtotal; //total is equal ship plus subtotal
        
        std::cout << std::fixed; //sets output to 2 decimal places
        std::cout << std::setprecision(2);
        std::cout << "Subtotal: $" << subtotal << std::endl;//outputs subtotal
        std::cout << "Shipping Cost:" << ship << std::endl;//outputs shipment cost
        std::cout << "Total: $" << total << std::endl;//outputs total
        
        (getMemberFromID(mID))->emptyCart(); //empties the cart
        }
    }
}
