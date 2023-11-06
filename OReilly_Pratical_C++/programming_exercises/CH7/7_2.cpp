/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.7_2   Write a program to perform date arithemetic.
 *          Such as how many day there are between 6/1/90 and 8/3/92.
 *          Include a specification and a code design.   
 * 
 * writen by Attahiru Jibril
 * 10/22/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 * Date Calculator v1.0 - 
 *      10/22/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      Date Calculator is an applicatin that calculates the number of days between two days.
 *      It promts the user to input the the dates and calculate the days difference and display the result.
 *          The following Conversions are supported:
 * 
 * Usage:
 *      1. User inputs earlier date
 *      2. User then inputs newer date
 *      3. The resulting days difference is displayed.
 * 
 * Restrictions:
 *      1. User is must enter date in the format DD/MM/YYYY or DD-MM-YYYY to get reasonable output.
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *      Read first date.
 *      Read second date.
 *      Convert date inputs to int type.
 *      Find difference of the two dates.
 *      Convert difference to no of days.
 *      Display days diffrence of two dates.
 *  END
************************************************************************************************************/
#include <iostream>
#include <string>
int main(){

    std::string first_date; //first date holder
    std::string second_date; //second date holder

    std::cout << "******************************\n";
    std::cout << "* Date Difference Calculator *\n";
    std::cout << "******************************\n";

    /*Read first date input from user*/
    std::cout << "-> Enter first date: ";
    std::getline(std::cin, first_date);
    /*Read second date input from user*/
    std::cout << "\n-> Enter Second date: ";
    std::getline(std::cin, second_date);

    /*  - In ascii, number '0' is 48 and it increments for others, so subtracting '0' from a number
            stored aas char will return the offset which in turn is the number in int.
        - Each number is multiplied by it unit (unit, themt, hundreth...) and added up to get the 
            corresponding total weight.
        - months are then converted to days, and so is years.
        - the corresponding total day is used to find the difference.
        
    */

    //solve for no of day(s) in int
    int day_f =  ((first_date[0] - '0') * 10) + (first_date[1] - '0');
    //solve for no of month(s) in int
    int month_f =  ((first_date[3] - '0') * 10) + (first_date[4] - '0');
    //solve for no of year(s) in int
    int year_f =  ((first_date[6] - '0') * 1000)+
                ((first_date[7] - '0') * 100) +
                ((first_date[8] - '0') * 10)  + 
                ((first_date[9] - '0') * 1);

    //process second input.
    //solve for no of day(s) in int
    int day_s =  ((second_date[0] - '0') * 10) + (second_date[1] - '0');
    //solve for no of month(s) in int
    int month_s =  ((second_date[3] - '0') * 10) + (second_date[4] - '0');
    //solve for no of year(s) in int
    int year_s =  ((second_date[6] - '0') * 1000)+
                ((second_date[7] - '0') * 100) +
                ((second_date[8] - '0') * 10)  + 
                ((second_date[9] - '0') * 1);

    /*  calculate the difference*/
    int day_diff = day_s - day_f;
    int month_diff = month_s - month_f;
    int year_diff = year_s - year_f;

    /*  convert year and month to days and add up*/
    int difference = day_diff + (month_diff * 30) + (year_diff * 365);

    std::cout << "\n-> Number of days between ";
    std::cout << day_f << "/" << month_f << "/" << year_f;
    std::cout << " and ";
    std::cout << day_s << "/" << month_s << "/" << year_s;
    std::cout << " is " << abs(difference) << " days";
    return 0;
}