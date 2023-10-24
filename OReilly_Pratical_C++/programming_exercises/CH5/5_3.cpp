/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.5_3 Write a program that prints out the perimeter of a rectangle given its
 *        height and width [Perimeter = 2(width+height)]
 * 
 * writen by Attahiru Jibril
 * 10/22/2023
*******************************************************************************************/

#include <iostream>
int main(){
    float height = 0.0;
    float width = 0.0;
    double perimeter = 0.0;
    std::cout  <<"Enter width: ";
    std::cin >> width;
    std::cout  <<"Enter height: ";
    std::cin >> height;
    perimeter = 2 *(width+height);
    std::cout  <<"Perimeter is : ";
    std::cout << perimeter <<"\n";
    return 0;
}