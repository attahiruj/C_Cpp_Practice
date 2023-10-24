/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.7_1   Write a program to convert English units to metric (Eg. miles to km, gallon to liters).
 *          Include a specification and code design.    
 * 
 * writen by Attahiru Jibril
 * 10/22/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 * MetricUnitConverter - 
 *      22/10/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      MetricUnitConverter is an English unit to Metric unit converter. It promts the user to
 *      select the unit to conver and then the value to be converted. 
 *      It performs the conversion using the stander conversion rati and the result is displayed.
 *          The following Conversions are supported:
 *              *   mile(mi) -> kilometers (km)
 *              *   gallon (lg) -> liters (l)
 *              *   pound -> kilogram(kg)
 * 
 * Usage:
 *      1. User selects the type of quantity you want to convert From->To (eg: miles->km).
 *      2. User then inputs the value to be converted.
 *      3. The resulting conversion is displayed.
 * 
 * Restrictions:
 *      1. User is only able convert predefined conversion system.
 *      2. User can only convert to metric and not to engish unit.
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *      Display available conversions.
 *      Loop:
 *          Read user conversion option.
 *          Read users input value.
 *          Display the Result.
 *      End-loop
************************************************************************************************************/
#include <iostream>
int main(){

    char unit = 0; //type of unit to be converted.
    float value = 0; //value to be converted to metrics.
    float result = 0; //result of conversion in metrics

    std::cout << "**************************\n";
    std::cout << "* Metric Unit Converter  *\n";
    std::cout << "**************************\n";
    std::cout << "* Enter 1,2,3 to select convertion type, q to quit\n";
    std::cout << "*\n";
    std::cout << "* 1. mile(mi) -> kilometers (km)\n";
    std::cout << "* 2. gallon (lg) -> liters (l)\n";
    std::cout << "* 3. pound -> kilogram(kg)\n";

    while (1){
        //read user input
        std::cin >> unit;
        if(unit == '1'){
            std::cout << "Enter value to convert(miles): ";
            std::cin >> value;
            result = value * 1.60934;
            std::cout << result << " km\n";
        }else if(unit == '2'){
            std::cout << "Enter value to convert(gallon): ";
            std::cin >> value;
            result = value * 3.78541;
            std::cout << result << " liters\n";
        }else if(unit == '3'){
            std::cout << "Enter value to convert(pound): ";
            std::cin >> value;
            result = value * 0.453592;
            std::cout << result << " kg\n";
        }else if(unit == 'q' || 'Q'){
            break;
        }else{
            std::cout << "Invalid input, Try again\n";
        }
    }
    
    
    return 0;
}