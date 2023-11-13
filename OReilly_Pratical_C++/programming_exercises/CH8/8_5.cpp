/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.8_5   Write a program that reads a character and prints out whether or not it is a vowel or consonant
 * 
 * writen by Attahiru Jibril
 * 12/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  vowel-checker: 
 *      12/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      vowel-checker: - A progrm that reads a character and prints out whether or not it is a vowel or consonant
 * 
 *  USAGE:
 *      1. Input character
 *      2. Get to know if it is a vowel or consonant
 * 
 *  RESTRICION:
 *      1. !
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  
 *  START
 *          accept alphabet
 *          if alphabet is vowel
 *              print out vowel
 *          else if alphabet is consonant
 *              print out consonant
 *          end
 *  END
************************************************************************************************************/

#include <iostream>

int main(){
    std::cout << "***********************************\n";
    std::cout << "*             Vowel Checker       *\n";
    std::cout << "***********************************\n";
    std::cout << "\n-> Enter a an alphabet and press enter\n";

    char alphabet = 0;
    while(true){
        std::cin >> alphabet;
        if(!(alphabet >= 'A' && alphabet <= 'z')){
            std::cout << "\nEnter a valid Alphabet, (A-Z or a-z). Enter 0 to exit \n";
        }
        //ensure user input is a valid alphabet using ascii table
        if(alphabet >= 'A' && alphabet <= 'z'){
            //switch for vowels
            switch (alphabet){
            case ('a'):
            case ('e'):
            case ('i'):
            case ('o'):
            case ('u'):
            case ('A'):
            case ('E'):
            case ('I'):
            case ('O'):
            case ('U'):
                std::cout << alphabet << " is vowel\n";
                break;
            
            default:
                std::cout << alphabet << " is consonant\n";
                break;
            }
        }
        //used to exit program
        if(alphabet == '0')
            break;
    }
}