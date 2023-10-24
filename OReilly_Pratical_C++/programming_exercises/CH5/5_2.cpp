/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.5_2 Write a program to calculate the volume of a sphere. [4/3pi*r^3]
 *        
 * 
 * writen by Attahiru Jibril
 * 10/21/2023
*******************************************************************************************/

#include <iostream>
int main(){
    const float PI = 3.142;
    float radius = 0.0;
    double volume = 0.0;
    std::cout  <<"Enter radius of sphere: ";
    std::cin >> radius;
    volume = 4/3 * PI * (radius*radius*radius);
    std::cout  <<"Volume of Sphere is: ";
    std::cout << volume <<" m^3\n";
    return 0;
}