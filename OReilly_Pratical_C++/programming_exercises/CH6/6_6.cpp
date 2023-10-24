/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.6_6   Write a program that, given the number of hours an employee worked 
 *          and his hourly wage, computes his weekly pay. Count any hour over 40 as overtime
 *          at time-and-a-half.
 *  
 * writen by Attahiru Jibril
 * 10/22/2023
*******************************************************************************************/

#include <iostream>
int main(){
    int hours = 0;
    int wage = 0;
    int weekly_pay = 0;

    std::cout << "\nInput woker's hour: ";
    std::cin >> hours;
    std::cout << "\nInput worker's wage: ";
    std::cin >> wage;

    if (hours < 40){
        weekly_pay = hours * wage;
        std::cout << "\nWeekly pay is: $" << weekly_pay;
    }else{
        int overtime = hours - 40;
        weekly_pay = 40 * wage;
        weekly_pay += (overtime * 1.5 * wage);
        std::cout << "\nWeekly pay is: $" << weekly_pay;
    }

    return 0;
}