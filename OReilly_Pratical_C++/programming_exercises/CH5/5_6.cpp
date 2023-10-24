/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.5_6 Write a program that takes integeras the number of minutes and outputs 
*         total hour and minute.
 * 
 * writen by Attahiru Jibril
 * 10/22/2023
*******************************************************************************************/

#include <iostream>
int main(){
    int hour = 0;
    int min = 0;
    int total_min = 0;
    std::cout  <<"Enter no of minutes(s): ";
    std::cin >> total_min;
    hour = (total_min / 60);
    min = (total_min % 60);
    std::cout  <<"Time is : ";
    std::cout << hour <<"hour(s) "<< min <<"minute(s)\n";
    return 0;
}