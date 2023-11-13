/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.8_3   Write a program to average n number
 * 
 * writen by Attahiru Jibril
 * 13/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  n-numbers averager: 
 *      13/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      n-numbers averager: - A progrm that calculates the average of n-numbers
 * 
 *  USAGE:
 *      1. Input numbers, pressing enter after each input
 *      2. input 0 when done.
 * 
 *  RESTRICION:
 *      1. .
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *          Read user inputs
 *          add numbers
 *          if user input is 0:
 *              break
 *          calculate average
 *  END
************************************************************************************************************/

#include <iostream>

int main(){
    float sum = 0.0;
    float average = 0.0;
    int n = 0;  //number of inputs
    float input;

    std::cout << "***********************************\n";
    std::cout << "*  n-numbers averager *\n";
    std::cout << "***********************************\n";
    std::cout << "\n-> Enter a number and press enter, enter '0' and press enter when done: \n";
    
    while(1){
        /*Read input  from user*/
        std::cin >> input;
        if (input != 0){
            sum += input;       //if number is negetive (+*- = -) so it works ;)
            n++;
        }
        if (input == 0){        //Exit loop if '0' is inputed
            break;
        }
    }
    average = sum/n;
    std::cout << "\n Average:  " << average << " \n";
    return 0;
}