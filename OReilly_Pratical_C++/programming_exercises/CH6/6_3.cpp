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
 * PQ.6_2   modify the code to put a + or - after the grade based on the last digit of the
 *          score.
 *          Last digit  |   Modifier
 *              1-3     |       -
 *              4-7     |   <blank>
 *              8-0     |       +
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
    
    //score modifier
    int score_mod = score % 10; //stores remainder of grade/10
    
    if(score_mod > 0 && score_mod <=3)
        std::cout << '-';
    else if(score_mod >= 8 || score_mod ==0)
        std::cout << '+';
    else std::cout << "";
    
    return 0;
}