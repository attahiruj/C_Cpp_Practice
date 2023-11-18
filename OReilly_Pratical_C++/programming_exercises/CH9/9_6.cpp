/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.9_6
 *    Write a function that scans for the character '-' andreplaces it wit '_'
 * 
 * writen by Attahiru Jibril
 * 18/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  Hyphen2Underscornizer: 
 *      18/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      Hyphen2Underscornizer: - A progrm that replaces all hyphen with an underscore in a text
 * 
 *  USAGE:
 *      1. run program
 *      2. Type in text
 *      3. get editted text output.
 *  RESTRICION:
 *      1. 
 *    
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  
 *  START
 *          Procedure start:
 *              accept string
 *              for each member in array:
 *                  if it is a hyphen
 *                      replace with underscore
 *              return new text
 *          Procedure end
 * 
 *          Program start:
 *              Input text array
 *              call Hyphen2Underscornizer procedure 
 *          Program end
************************************************************************************************************/

void strUscorer(char input[]){
    char output[1000];
    for(int i = 0; input[i] != '\0'; i++){
        if(input[i] == '-'){
            input[i] = '_';
        }
    }
}

#include <iostream>

int main(){
    std::cout << "***********************************\n";
    std::cout << "*       Hyphen2Underscornizer     *\n";
    std::cout << "***********************************\n";
    
    char text[1000];
    std::cout << "\nEnter text: ";
    std::cin.getline(text, sizeof(text));
    
    strUscorer(text);
    std::cout << "Underscored version: " << text <<"\n";
    return 0;
}


/*
Lessons:
    1. arrays are automatically passed by reference, try to pass an array by reference is like passing an array of reference
    2. All manipulations on array passed to a function changes the original array automatically. This means that no need for return.
*/