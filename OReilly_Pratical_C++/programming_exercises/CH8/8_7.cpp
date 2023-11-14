/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.8_7   8_6. Write a program that converts numbers to words.
 *          Example: 895 results in "eight nine five"
 *          8_7. The number 85 is said 'eighty five' not 'eight five'
 *          Modify the previous program to handle the number zero to hundred so that
 *          all numbers come out as we say them
 * 
 * writen by Attahiru Jibril
 * 14/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  Number2words v2: 
 *      14/11/2023  - Attahiru Jibril
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
 *      1. can on check numbers 1 - 100 ...
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
    std::cout << "*          Numbers2words v2        *\n";
    std::cout << "***********************************\n";
    std::cout << "\n-> Enter positive integers 1-100 and press enter\n";

    int input = 0;
    int tenth = 0;
    int unit = 0;
    int n = 0; // holds number of intergers inputed

    std::cin >> input;
    if(input > 0){
        //Seperate number by weight hundreth, tenth and unit
        //arangement of the if statement matters

        // print word of currnt number
        if(input <= 10){
            switch (input){
            case 0:
                std::cout << " zero";
                break;
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
            case 10:
                std::cout << " ten";
                break;
            default:
                std::cout << "\n Please enter a valid number\n";
                break;
            }
        }else if(input > 10 && input <= 20){
            int number = input%10;
            switch (number){
            case 1:
                std::cout << " eleven";
                break;
            case 2:
                std::cout << " twelve";
                break;
            case 3:
                std::cout << " thirteen";
                break;
            case 4:
                std::cout << " fourteen";
                break;
            case 5:
                std::cout << " fifteen";
                break;
            case 6:
                std::cout << " sixteen";
                break;
            case 7:
                std::cout << " seventeen";
                break;
            case 8:
                std::cout << " eighteen";
                break;
            case 9:
                std::cout << " nineteen";
                break;
            case 0:
                std::cout << " ten";
                break;
            default:
                std::cout << "\n Please enter a valid number\n";
                break;
            }
        }else if(input > 20 && input < 100){

            //use modulus to seperate tens from unit
            int unit    = (input %10);
            int tenth   = ((input % 100) - unit)/10;

            //print out ten of number
            switch (tenth){
            case 2:
                std::cout << " twenty";
                break;
            case 3:
                std::cout << " thirty";
                break;
            case 4:
                std::cout << " forty";
                break;
            case 5:
                std::cout << " fifty";
                break;
            case 6:
                std::cout << " sixty";
                break;
            case 7:
                std::cout << " seventy";
                break;
            case 8:
                std::cout << " eighty";
                break;
            case 9:
                std::cout << " ninety";
                break;
            default:
                std::cout << "\n Please enter a valid number\n";
                break;
            }
            //print out unit of number
            switch (unit){
            case 0:
                std::cout << " ";
                break;
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
            default:
                std::cout << "\n Please enter a valid number\n";
                break;
            }
        }else if(input == 100){
            std::cout << "\n 100";
        }
        else{
            std::cout << "\n Number is greater than 100\n";
        }
    }
}