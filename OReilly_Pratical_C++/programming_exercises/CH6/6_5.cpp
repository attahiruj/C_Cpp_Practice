/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.6_5   A leap year is any year divicible by 4 unless it is divicible by 100 but not 400.
 *          Write a proram to tell whether a year is a leap year.  
 * 
 * writen by Attahiru Jibril
 * 10/22/2023
*******************************************************************************************/

#include <iostream>
int main(){
    int year = 0;
    //  accept user input of the year
    std::cout << "Enter year you want to check: ";
    std::cin >> year;

    //check if year is divicible by 4 or 100 but not 400
    int leap_check_4 = year % 4;
    int leap_check_100 = year % 100;
    int leap_check_400 = year % 400;

    //check if year is divicible by 4 or 100 but not 400
    if(leap_check_4 == 0 || leap_check_100 == 0 && leap_check_400 != 0){
        std::cout << year << " is a leap year\n";
    }else{
        std::cout << year << " is not a leap year\n";
    }
    return 0;
}