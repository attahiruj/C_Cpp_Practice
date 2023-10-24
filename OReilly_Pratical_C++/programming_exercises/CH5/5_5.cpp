/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.5_5 Write a program that takes hour and minute as input and outputs 
*         total number of minute
 * 
 * writen by Attahiru Jibril
 * 10/22/2023
*******************************************************************************************/

#include <iostream>
int main(){
    int hour = 0;
    int min = 0;
    int total_min = 0;
    std::cout  <<"Enter no of hour(s): ";
    std::cin >> hour;
    std::cout  <<"Enter no of minute(s): ";
    std::cin >> min;
    total_min = (hour * 60) + min;
    std::cout  <<"Time is : ";
    std::cout << total_min <<" minutes\n";
    return 0;
}