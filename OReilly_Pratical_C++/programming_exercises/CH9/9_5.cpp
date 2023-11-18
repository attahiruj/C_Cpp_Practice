/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.9_5   Write a function that return the maximum value of an array of numbers.
 * 
 * writen by Attahiru Jibril
 * 18/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  getMaxOfArray: 
 *      18/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
*               Dead is purely coincedental.
 * 
 *      getMaxOfArray: - A progrm that returns the member with max value in an array.
 * 
 *  USAGE:
 *      1. run program
 *      2. Input array of numbers
 *      3. get maximum value in array.
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
 *              accept array
 *              for each member in array:
 *                  compare with the current biggest member
 *                  if bigger than biggest member
 *                      make new biggest member
 *              return biggest member by end of array
 *          Procedure end
 * 
 *          Program start:
 *              Input number array
 *              call getMaxOfArray procedure 
 *          Program end
************************************************************************************************************/

//overloaded function for both int and float
float getMaxOfArray(float input[], int n){
    float max_member = 0;
    for(int i = 0; i < n; ++i){
        if(input[i] > max_member){
            max_member = input[i];
        }
    }
    return max_member;
}

int getMaxOfArray(int input[], int n){
    int max_member = 0;
    for(int i = 0; i < n; ++i){
        if(input[i] > max_member){
            max_member = input[i];
        }
    }
    return max_member;
}

#include <iostream>



int main(){
    std::cout << "***********************************\n";
    std::cout << "*        getMaxOfArray        *\n";
    std::cout << "***********************************\n";

    int numbers[] = {1,1,1,18,25,21};
    int number_of_elements = sizeof(numbers)/sizeof(numbers[0]);
    std::cout << getMaxOfArray(numbers, number_of_elements);
}