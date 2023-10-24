/******************************************************************************************
 * O'Reilly - Pratical C++ Programming.     
 *                                               
 * PQ.4_3   Write a program to compute the circumfrence of a rectangle 3 inches wide, 
 *          5 inches long.
 * 
 * writen by Attahiru Jibril
 * 10/21/2023
*******************************************************************************************/

#include <iostream>
int main(){
    int width = 3;
    int height = 5;
    int perimeter = 2 * (width + height);
    std::cout<<"Perimeter is : "<<perimeter;

    //Q.    what changes must be made to the program  so it works do a rectangle 
    //      6.8 inches wide and 2.3 inches long?
    //A.    change the data type to of width height and perimeter to float.

    return 0;
}