/*********************************************************************
** Author: Philip Chang
** Date: November 23, 2016
** Description: This is a function called postfixEval that uses a stack
**              <double> to evaluate postfix expressions.
*********************************************************************/
//including libraries
#include <iostream>
#include <string>
#include <stack> //includes stack to use stack
#include <cstring> //includes cstring to use strtok
#include <cstdlib> //includes cstdlib to use atof
#include <cctype> //includes cctype to use isdigit
using namespace std;

double postfixEval(char expression [])
{
  stack<double> stuff; //declaring stack that contains doubles named stuff

  double num1; //double variable named num1
  double num2; //double variable name num2
  double equal = 0; //double variable named equal intialized to 0

  char *aptr; //declare pointer
    aptr = strtok(expression," "); //using strtok to split expression into tokens

  while (aptr != nullptr)
  {
  if (isdigit(*aptr)) //using isdigit to see if it is a digit
    {
      //atof parses variable to double. then we push variable onto stack
      stuff.push(atof(aptr));
    }
  else
  {
      string operators = aptr; //string called operators set to pointer

    if (operators == "+") //if string has a +
    {
        num1 = stuff.top(); // sets num1 to top of stack
        stuff.pop(); // pops off num1 from stack
        num2 = stuff.top(); //sets num2 to the top of stack now
        stuff.pop(); // pops off num2 from stack
        equal = num2 + num1; //sets equal to num2 + num1
        stuff.push(equal); //pushes equal onto the stack
    }
    if(operators == "-")
    {
        num1 = stuff.top();// sets num1 to top of stack
        stuff.pop();// pops off num1 from stack
        num2 = stuff.top();//sets num2 to the top of stack now
        stuff.pop();// pops off num2 from stack
        equal = num2 - num1; //sets equal to num2 - num1
        stuff.push(equal);//pushes equal onto the stack
    }
    if(operators == "*")
    {
        num1 = stuff.top();// sets num1 to top of stack
        stuff.pop();// pops off num1 from stack
        num2 = stuff.top();//sets num2 to the top of stack now
        stuff.pop();// pops off num2 from stack
        equal = num2 * num1; //sets equal to num2 * num1
        stuff.push(equal);//pushes equal onto the stack
    }
    if(operators == "/")
    {
        num1 = stuff.top();// sets num1 to top of stack
        stuff.pop();// pops off num1 from stack
        num2 = stuff.top();//sets num2 to the top of stack now
        stuff.pop();// pops off num2 from stack
        equal = num2 / num1; //sets equal to num2 divided by num1
        stuff.push(equal);//pushes equal onto the stack
    }
  }
      aptr = strtok(nullptr, " ");//used to move to next token of the same string, since previous
                                //token is now NULL
  }
    return equal;
}



/*commetning out main
  int main()
{
    char expression[] = "25 12 7 - 2 * /";
    cout << postfixEval(expression) <<endl;
    
    return 0;
}
 */

