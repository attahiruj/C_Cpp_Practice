/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.8_1   Write a program that computes the resistance of any number of parallel resistors.
 *          1/R = 1/R1 + 1/R2 + .... + 1/Rn
 * 
 * writen by Attahiru Jibril
 * 12/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  Parallel-Resistoance-Calculator: 
 *      12/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      Parallel-Resistoance-Calculator: - A progrm that computes the resistance of any number of parallel resistors
 * 
 *  USAGE:
 *      1. Input resistor values, pressing enter after each input
 *      2. input 0 when done.
 * 
 *  RESTRICION:
 *      1. can only calculate resistors in parallel
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *          Read user inputs
 *          add resistors
 *          if user input is 0:
 *              break
 *          calculate resistance in parallel
 *  END
************************************************************************************************************/

#include <iostream>

int main(){
    float resistor_value = 0.0;
    float resistance = 0.0;
    float input;

    std::cout << "***********************************\n";
    std::cout << "*  Parallel-Resistance-Calculator *\n";
    std::cout << "***********************************\n";
    std::cout << "\n-> Enter a resistor value and press enter, enter '0' and press enter when done: \n";
    
    while(1){
        /*Read input  from user*/
        std::cin >> input;
        if (input > 0){
            resistor_value += (1/input);
        }else if (input < 0){
            std::cout << "*Invalid resitor value \n";
        }
        if (input == 0){
            break;
        }
    }
    resistance = 1/resistor_value;
    std::cout << "\n Resistance:  " << resistance << " OHM\n";
    return 0;
}