/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.9_2   Write function "begins(string1, string2)" that returns true if string1 begins string2.
 *          Write a program to test the function.
 * 
 * writen by Attahiru Jibril
 * 15/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  StringBeginChecker: 
 *      15/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      StringBeginChecker: - A progrm that number of words in a string.
 * 
 *  USAGE:
 *      1. run program and input string one and two
 *      2. answer is given
 * 
 *  RESTRICION:
 *      1. string must not be more than 1000 characters.
 *      2. program is case sensitive.
 *    
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  
 *  START
 *          Procedure start:
 *              read string1 and two
 *              while string1 is not at end char:
 *                  check if chars in string one is identical to string two
 *              return true for identical or false
 *          Procedure end
 * 
 *          Program start:
 *              input sentence 1
 *              input sentence 2
 *              call word begin procedure
 *              output identical or not
 *          Program end
 *  END
************************************************************************************************************/

/// @brief A function that check if the first string begins the second. case sensitive and also accepts sentences.
/// @param string1 first sentence
/// @param string2 second sentence
/// @return 1 if true, 0 if false
int begins(char string1[], char string2[]){
    for(int i = 0; (string1[i] != '\0') && (string2[i] != '\0'); i++){
        if(string1[i] != string2[i]){
            return 0;
        }
    }
    return 1;
}

#include <iostream>
// #include <stdlib.h>
int main(){
    const int MAX_INPUT = 500;
    char first_text[MAX_INPUT];
    char second_text[MAX_INPUT];

    std::cout << "***********************************\n";
    std::cout << "*        StringBeginChecker        *\n";
    std::cout << "***********************************\n";
    
    std::cout << "\nEnter your first text: ";
    std::cin.getline(first_text, sizeof(first_text));
    std::cout << "\nEnter your secont text: ";
    std::cin.getline(second_text, sizeof(second_text));

    if(begins(first_text, second_text)){
        std::cout << "\nTrue\n";
    }else{
        std::cout << "\nFalse\n";
    }
    return 0;
}