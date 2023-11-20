/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.10_1
 *    The C++ standard contains a boolean type(bool) that defines the values True and False.
 *      The problem is most compilers haven't implemented this yet.
 *      Create a boolean type by using #define to defime the values for boolean true and false.
 * 
 * writen by Attahiru Jibril
 * 19/11/2023
************************************************************************************************************/

#define TRUE 1
#define FALSE 0

#include <iostream>

int main(){
    if (8<3){
        std::cout << TRUE;
        return TRUE;
    }else{
        std::cout << FALSE;
        return FALSE;
    }
    return 0;
}