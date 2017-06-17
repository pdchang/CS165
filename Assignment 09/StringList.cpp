/*********************************************************************
 ** Author:Philip Chang
 ** Date:November 23, 2016
 ** Description: Implementation file for linked list class called StringList
 *********************************************************************/
#include "StringList.hpp"

void StringList::add(std::string stringy)
{
    if (head == nullptr)//if list is empty
    {
        head = new ListNode(stringy);//creates new node with
                            //first node set to stringy
    }
    else //list is not empty
    {
        ListNode *nodePtr = head;//using nodePtr to traverse list
                            //starting at head
        while (nodePtr->next !=nullptr)//while loop that traverses list
                                //until the end or NULL
        {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = new ListNode(stringy);//adds new node to the end
    }
}
int StringList::positionOf(std::string stringy)//positionOf function with string parameter
{
    ListNode *nodePtr = head; //using nodePtr to traverse list, starting at head
    int pos = 0; //initializes pos to 0
    while (nodePtr != nullptr)//while loop that traverses list until the end
    {
        if (nodePtr->value == stringy)//if value matches stringy
        {
            return pos; //returns pos
        }
        else
        {
            nodePtr = nodePtr->next; //moves to next node
        }
        pos++; // counter
    }
    return -1;//returns -1 if not in it at all
}
bool StringList::setNodeVal(int position, std::string stringy)//setNodeVal function with int and
                                                    //string parameter
{
    ListNode *nodePtr = head; //using nodePtr to traverse list, starting at head
    int pos = 0; // intailzies pos to 0
    while (nodePtr != nullptr) // while loop that travererses list till end
    {
        if (pos == position) //if pos is the same as position
        {
            nodePtr->value = stringy; //sets value to stringy
            return true; //return true
        }
        pos++; // counter
        nodePtr = nodePtr->next; //moves to next node
    }
    return false; // returns false
}
std::vector<std::string> StringList::getAsVector()
{
    std::vector<std::string> veccy; //declaring vector veccy
    StringList stringy; //declaring StringList object stringy
    
    ListNode *nodePtr = head; //using nodePtr to traverse list starting at head
    
    while (nodePtr != nullptr) //while loop to traverese list
    {
        veccy.push_back(nodePtr->value);//using push_back to insert value at node into vector
        nodePtr = nodePtr->next; //moves to next node
    }
    return veccy; //returns vector
    
}

StringList::StringList() //default constructor intialized as empty
{
    head = nullptr;
}
StringList::~StringList() //destructor
{
    ListNode *nodePtr = head; //start at head of the list
    while (nodePtr !=nullptr)//while loop that goes to end of list
    {
        ListNode *garbage = nodePtr;//garbage pointer set to nodePtr
        //to keep track of node to be deleted
        nodePtr = nodePtr->next; //nodePtr set next node, if any
        //delete the garbage node
        delete garbage;
        
    }
}
StringList::StringList(const StringList &stringy) //copy constructor
{
    head = nullptr; //sets head to nullptr
    ListNode *aptr = stringy.head; //sets a pointer to head of stringy
    while (aptr != nullptr) //while loop to traverse the list
    {
        //this is pretty much add function but with going through the whole list
        if (head == nullptr)//if list is empty
        {
            head = new ListNode(aptr->value);//creates new node with
            //first value
        }
        else //list is not empty
        {
            ListNode *nodePtr = head;//using nodePtr to traverse list
            //starting at head
            while (nodePtr->next !=nullptr)//while loop that traverses list
                //until the end or NULL
            {
                nodePtr = nodePtr->next;
            }
            nodePtr->next = new ListNode(aptr->value);//adds new node to the end
        }
        aptr = aptr->next; // moves to next node to copy
    }
}
