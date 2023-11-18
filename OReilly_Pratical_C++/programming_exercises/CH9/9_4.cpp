/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.9_4   Write a function that will take a character string and return a premitive hash code.
 * 
 * writen by Attahiru Jibril
 * 18/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  StringHashGenerator 
 *      18/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      StringHashGenerator: - A progrm that generates a premitive hash code from a character string
 * 
 *  USAGE:
 *      1. run program
 *      2. Input character string
 *      3. Hash code is generated.
 * 
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
 *              accept character string input
 *              for each charcter in string:
 *                  convert to integer and sum up
 *              return sum
 *          Procedure end
 * 
 *          Program start:
 *              Input charater string
 *              call hash generator procedure 
 *          Program end
 *  END
************************************************************************************************************/

#include <iostream>

/// @brief genenrates hash code of string input
/// @param message string to get its hash code
/// @return (int) hashcode
int strhash(char message[]){
    int total;
    for(int i = 0; message[i] != '\0'; i++){
        total += (int) message[i];
    }
    return total;
}


int main(){
    
    std::cout << "***********************************\n";
    std::cout << "*        StringHashGenerator       *\n";
    std::cout << "***********************************\n";
    
    std::cout << "\nEnter text: \n";
    char text[] = "";
    std::cin >> text;
    std::cout << "\nHash: " << ">> " << strhash(text) << " <<\n";
}