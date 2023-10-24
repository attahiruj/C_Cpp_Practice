/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.6_1   A professor generates letter grades using
 *          % correct   |   Grade
 *              0-60    |   F
 *              61-70   |   D
 *              71-80   |   c
 *              81-90   |   B
 *              90-100  |   A
 *          Given  numeric grade, print the letter.
 * 
 * writen by Attahiru Jibril
 * 10/22/2023
*******************************************************************************************/

#include <iostream>
int main(){
    int score = 0;
    std::cout << "Enter Score: ";
    std::cin >>  score;
    std::cout << "Your grade is: ";
    if (score < 1 || score > 100)
        std::cout << "Enter a valid Score!";
    else if(score < 61)
        std::cout << 'F';
    else if(score < 71)
        std::cout << 'D';
    else if(score < 81)
        std::cout << 'C';
    else if(score < 91)
        std::cout << 'B';
    else  std::cout << 'A';
        
    
    return 0;
}