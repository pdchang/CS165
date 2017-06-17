/*********************************************************************
 ** Author: Philip Chang #933028697
 ** Date: September 28th, 2016
 ** Description:Project 1.a animal.cpp
 *********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
    std::string faveAnimal; //defines string as faveAnimal
    std::cout << "Please enter your favorite animal." << std::endl; /*Displays please enter your favorite animal*/
    std::cin >> faveAnimal; //user input favorite animal
    std::cout << "Your favorite animal is the " << faveAnimal; /*displays Your favorite animal is and the user input*/
    std::cout << "." << std::endl; //puts . at the end of output
    
    return 0;
}
/*********************************************************************
 ** Description:The program asks what the user's favorite animal is and the displays output as Your favorite animal and the user's input.
 *********************************************************************/
