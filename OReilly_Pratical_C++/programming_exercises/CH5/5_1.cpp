/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.5_1 Write a program that converts celcius to fahrenheit. [F = 9/5C+32]
 *        
 * 
 * writen by Attahiru Jibril
 * 10/21/2023
*******************************************************************************************/

#include <iostream>
int main(){
    float fahr = 0.0;
    float celc = 0.0;
    std::cout  <<"Enter Temperature in celcuis: ";
    std::cin >> celc;
    fahr = (9/5 * celc) + 32;
    std::cout  <<"Temperature in fahrenheit: ";
    std::cout << fahr <<"F\n";
    return 0;
}