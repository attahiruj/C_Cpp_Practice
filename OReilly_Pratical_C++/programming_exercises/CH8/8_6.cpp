/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.8_6   Write a program that converts numbers to words.
 *          Example: 895 results in "eight nine five"
 * 
 * writen by Attahiru Jibril
 * 12/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  Number2words: 
 *      12/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      Number2words: - A progrm that output the inputed numbers in words.
 * 
 *  USAGE:
 *      1. Input numbers
 *      2. Get umbers in words
 * 
 *  RESTRICION:
 *      1. can on check numbers in hundreds. ie 123, 567, 100 ...
 *      2. reads out number literally Eg. 456 -> 'for five six' instead of four hundred and fifty six
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  
 *  START
 *          accept numbers
 *          if number is greater than zero and valid
 *              switch cases of number:
 *                  output corresponding word of number
 *          end
 *  END
************************************************************************************************************/

#include <iostream>

int main(){
    std::cout << "***********************************\n";
    std::cout << "*           Numbers2words         *\n";
    std::cout << "***********************************\n";
    std::cout << "\n-> Enter positive integers (not more than 3) and press enter\n";

    int number = 0;
    int hundreth = 0;
    int tenth = 0;
    int unit = 0;
    int n = 0; // holds number of intergers inputed

    std::cin >> number;
    if(number > 0){
        //Seperate number by weight hundreth, tenth and unit
        //arangement of the if statement matters
        if(number >= 100){
            unit        = (number%10);
            tenth       = ((number%100) - unit);
            hundreth    = ((number%1000) - tenth - unit);
            n = 3;
        }
        else if(number >= 10){
            unit        = (number%10);
            tenth       = ((number%100) - unit);
            n = 2;
        }else{
            unit = number;
            n = 1;
        }

        //for every number in series of number print out the word
        for (int i = n; i > 0; i--){
            //set index of number as current number
            if(i == 3){
                number = hundreth/100;  //convert hundred to unit
            }else if(i == 2){
                number = tenth/10;      //convert tenth to unit
            }else if(i == 1){
                number = unit;
            }
            // print word of currnt number
            switch (number){
            case 1:
                std::cout << " one";
                break;
            case 2:
                std::cout << " two";
                break;
            case 3:
                std::cout << " three";
                break;
            case 4:
                std::cout << " four";
                break;
            case 5:
                std::cout << " five";
                break;
            case 6:
                std::cout << " six";
                break;
            case 7:
                std::cout << " seven";
                break;
            case 8:
                std::cout << " eight";
                break;
            case 9:
                std::cout << " nine";
                break;
            case 0:
                std::cout << " zero";
                break;
            default:
                std::cout << "\n Please enter a valid number\n";
                break;
            }
        }
    }
}