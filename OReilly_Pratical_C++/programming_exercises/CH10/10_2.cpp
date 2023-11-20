/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.10_2
 *      Write a macro that returns true if its parameter is devisible by 10 and false otherwise.
 * 
 * writen by Attahiru Jibril
 * 19/11/2023
************************************************************************************************************/

#define TRUE 1
#define FALSE 0
#define DIV_10(x) ((x%10 == 0)?TRUE:FALSE)
#include <iostream>

int main(){
    if (DIV_10(10)){
        std::cout << TRUE << " -> True";
        return TRUE;
    }else{
        std::cout << FALSE << " -> False";
        return FALSE;
    }
    return 0;
}