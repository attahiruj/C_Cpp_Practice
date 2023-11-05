/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.7_4   Write a program to tell whether a number is prime.
 * 
 * writen by Attahiru Jibril
 * 5/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  TX TTT v1.0 - 
 *      23/10/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      PrimeChecker - A progrm that determines if a numer inputed is prime.
 * 
 *  USAGE:
 *      1. Input a number
 *      2. Get a response if it is a prime or not.
 * 
 *  RESTRICION:
 *      1. only checks one interger number at a time.
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *      Read number from user.
 *      Check if number is prime
 *      Print answer to user.
 *  END
************************************************************************************************************/
#include <iostream>

int main(){

    int number = 0;
    char input;

    std::cout << "******************************\n";
    std::cout << "*         PrimeChecker       *\n";
    std::cout << "******************************\n";

    /*Read number  from user*/
    std::cout << "\n-> Enter a number: ";
    std::cin >> number;
    
    // check if number is greater than 3 because 1,2 and 3 are primes
    if (number > 3){
        int i = 3;  //no need to start count from 1 because 1,2,3 are automatically named primes
        int flag = 0;
        /*
        -> loop through all possible factors of number
        -> if number is divisible by any of the factor, its not a prime
        -> if 'number is not a prime', set flag to '0' so that 'number is a prime' is skipped
        */ 
        while(i <= (number/2)){ 
            if(number%i == 0){
                std::cout << "-> " << number << " is not a PRIME!" << "\n";
                flag = 0;
                break;
            }
            i++;
            flag = 1;
        }
        if(flag == 1){
                std::cout << "-> " << number << " is a PRIME!" << "\n";
        }
    }else if((number>0) && (number<=3)){
        std::cout << "-> " << number << " is a PRIME!" << "\n";
    }
    else{
        std::cout << " Enter a positive intger" << "\n";
    }
}