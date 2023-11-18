/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.8_6   Write a program that converts numbers to words.
 *          Example: 895 results in "eight nine five"
 * 
 * writen by Attahiru Jibril
 * 14/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  Number2words: 
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
 *      1. can on check numbers in hundreds. ie 1-999 ...
 *    
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
    std::cout << "*         Numbers2words v3        *\n";
    std::cout << "***********************************\n";
    std::cout << "\n-> Enter positive integers (not more than 3) and press enter\n";

    int number      = 0;
    int hundreth    = 0;
    int tenth       = 0;
    int unit        = 0;
    int n           = 0;    //holds number of intergers inputed
    int teenflag    = 0;    //to check if numer ends in teen (ie 10-19)

    //accept user input
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
        bool notEndingZeroZero = (unit > 0) || (tenth > 0);
        //for every number in series of number print out the word
        for (int i = n; i > 0; i--){
            //set index of number as current number
            if(i == 3){
                number = hundreth/100;  //convert hundred to unit
            }else if(i == 2){
                number = tenth/10;      //convert tenth to unit
            }else{
                number = unit;
            }
            // print word of currnt number
            switch (number){
            case 1:
                if(i == 3){         //dealing with *100
                    std::cout << " one hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";      //the 'and is only necessay if last number is > 0
                }else if((i == 2) && (n >= 2)){
                    //10 - 19 handler done swutching value of unit
                    teenflag = 1;
                    switch (unit){
                    case 0:
                        std::cout << " ten";
                        break;
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
                    default:
                        break;
                    }
                }else if(!teenflag){
                    std::cout << " one";
                }
                break;
            case 2:
                if(i == 3){
                    std::cout << " two hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";
                }else if(i == 2){
                    std::cout << " twenty";
                }else if(!teenflag){
                    std::cout << " two";
                }
                break;
            case 3:
                if(i == 3){
                    std::cout << " three hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";
                }else if(i == 2){
                    std::cout << " thirty";
                }else if(!teenflag){
                    std::cout << " three";
                }
                break;
            case 4:
                if(i == 3){
                    std::cout << " four hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";
                }else if(i == 2){
                    std::cout << " fourty";
                }else if(!teenflag){
                    std::cout << " four";
                }
                break;
            case 5:
                if(i == 3){
                    std::cout << " five hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";
                }else if(i == 2){
                    std::cout << " fifty";
                }else if(!teenflag){
                    std::cout << " five";
                }
                break;
            case 6:
                if(i == 3){
                    std::cout << " six hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";
                }else if(i == 2){
                    std::cout << " sixty";
                }else if(!teenflag){
                    std::cout << " six";
                }
                break;
            case 7:
                if(i == 3){
                    std::cout << " seven hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";
                }else if(i == 2){
                    std::cout << " seventy";
                }else if(!teenflag){
                    std::cout << " seven";
                }
                break;
            case 8:
                if(i == 3){
                    std::cout << " eight hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";
                }else if(i == 2){
                    std::cout << " eighty";
                }else if(!teenflag){
                    std::cout << " eight";
                }
                break;
            case 9:
                if(i == 3){
                    std::cout << " nine hundred";
                    if((unit > 0) || (tenth > 0))std::cout << " and";
                }else if(i == 2){
                    std::cout << " ninety";
                }else if(!teenflag){
                    std::cout << " nine";
                }
                break;
            default:
                break;
            }
        }
    }
}