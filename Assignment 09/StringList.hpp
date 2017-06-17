/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 23, 2016
 ** Description: Header File for linked list class called StringList
 *********************************************************************/
#ifndef STRINGLIST_HPP //guards
#define STRINGLIST_HPP

#include <string>//include string and vector
#include <vector>

class StringList // class declaration
{
protected: // protected variables
    //declare a class for the list node
    struct ListNode
    {
        std::string value; //string variable called value
        ListNode *next; //pointer to next
        ListNode(std::string value1, ListNode *next1 = nullptr) //constructor for List Node
        {
            value = value1;
            next = next1;
        }
        
    };
    ListNode *head; // pointer to head
public:
    void add(std::string); //function that adds string parameter to end of the list
    //positionOf function that returns zerobased first occurence of string parameter in list
    int positionOf(std::string);
    //function sets value of node at position of value of string parameter, if position parameter
    //is >= the number of nodes in list, the operation cannot be carried out and returns false
    bool setNodeVal(int, std::string);
    //function that returns vector with same size,  values and order as StringList
    std::vector<std::string> getAsVector();
    StringList(); // default constructor
    StringList(const StringList &); // copy constructor
    ~StringList();//destructor
    
};



#endif
