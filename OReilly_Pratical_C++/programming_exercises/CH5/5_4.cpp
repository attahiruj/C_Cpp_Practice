/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.5_4 Write a program that converts km/hr to miles/hour. [miles = 0.6213712km]
 *        
 * 
 * writen by Attahiru Jibril
 * 10/22/2023
*******************************************************************************************/

#include <iostream>
int main(){
    const float ratio = 0.6213712;
    float km_hr = 0.0;
    double miles_hr = 0.0;
    std::cout  <<"Enter distance in km/hr: ";
    std::cin >> km_hr;
    miles_hr = km_hr * ratio;
    std::cout  <<"Distance is : ";
    std::cout << miles_hr <<" miles/hr\n";
    return 0;
}