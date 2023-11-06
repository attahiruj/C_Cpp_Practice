/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.7_4   Write a program that takes a series of numbers and counts the number of
 *          positive and negetive values.
 * 
 * writen by Attahiru Jibril
 * 6/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  Numbers Sign Checker v1.0 - 
 *      6/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      PrimeChecker - A progrm that checks number of positive and negetive values in a 
 *                     series of inputed number
 * 
 *  USAGE:
 *      1. Input numbers and press enter
 *      2. get number of positive and negetive inputs
 * 
 *  RESTRICION:
 *      1. 
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *      Read number from user.
 *      If number is positive:
 *          increment positive counter
 *      If number is positive:
 *          increment negetive counter
 *      print out number of positive and negetive numbers
 *  END
************************************************************************************************************/
#include <iostream>

int main(){

    float number = 0.0;
    int positive_counter = 0;
    int negetive_counter = 0;
    char input;

    std::cout << "******************************\n";
    std::cout << "*     Numbers Sign Checker   *\n";
    std::cout << "******************************\n";
    std::cout << "\n-> Enter a number and press enter, insert '0' when done: \n";
    
    while(1){
        /*Read number  from user*/
        std::cin >> number;
        if (number >= 0){
            positive_counter += 1;
        }else if (number <= 0){
            negetive_counter += 1;
        }
        if (number == 0){
            break;
        }
    }
    std::cout << "\n" << positive_counter << " Positive numbers and " << negetive_counter << " Negetive numbers were inputed.\n";
}