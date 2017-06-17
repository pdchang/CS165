/*********************************************************************
 ** Author:Philip Chang
 ** Date:December 2, 2016
 ** Description: Project 10.b - Implementation file for Product
 *********************************************************************/

#include "Product.hpp" //including header

Product::Product(std::string id, std::string t, std::string d, double p, int qa) //constructor that sets product private variables
{
    idCode = id;
    title = t;
    description = d;
    price = p;
    quantityAvailable = qa;
}
std::string Product::getIdCode() //get method return idCode
{
    return idCode;
}
std::string Product::getTitle() //get method return title
{
    return title;
}
std::string Product::getDescription()//get method return description
{
    return description;
}
double Product::getPrice() //get method returns price
{
    return price;
}
int Product::getQuantityAvailable() //get method returns quantity
{
    return quantityAvailable;
}
void Product::decreaseQuantity() //void function that decreases quantity available by 1
{
    int temp;
    temp = quantityAvailable;
    quantityAvailable = temp - 1;
}
