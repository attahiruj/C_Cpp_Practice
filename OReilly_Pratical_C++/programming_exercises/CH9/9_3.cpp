/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.9_3   Write a function count(number, array, length) that will count the number of times
 *          number appears in array. The array has length elements. the function should be recursive.
 *          Write a test program to go with the function.
 * 
 * writen by Attahiru Jibril
 * 15/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  numberFrequencyCounter: 
 *      15/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      numberFrequencyCounter: - A progrm that counts the number of times a specified number repeats in an array.
 * 
 *  USAGE:
 *      1. run program
 *      2. answer is given
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
 *              accept number-to-find, array, and length-of-array
 *              if length is zero, break out of recursion
 *              else increment counter if number is equal to array index
 *              increment counter if array value at index is equal to num-to-find
 *          Procedure end
 * 
 *          Program start:
 *              declare array, number,
 *              declare 
 *          Program end
 *  END
************************************************************************************************************/

/// @brief Finds the most repeated number in an array
/// @param number Number to find
/// @param array Array of numbers
/// @param length Length of array
/// @return most repeated number (int)
int count(int number, int array[], int length){
    // termination of recurssion
    if(length == 0){
        return 0;
    }
    //initialize counter [done once at first array index 0]
    int counter;
    if(number == array[0]){
        counter = 1;
    }else{
        counter = 0;
    }
    //recal self until length is 0
    return (counter += count(number, array + 1, length - 1));
}

#include <iostream>
int main(){
    int array[] = {5,5,4,5,6,8,5,6,8,4,1,2,7,5,5,5,5};
    int num2search = 5;
    int size = sizeof(array)/sizeof(array[0]);
    std::cout << num2search << " appears " << count(num2search, array, size) << " times.\n";

    return 0;
}