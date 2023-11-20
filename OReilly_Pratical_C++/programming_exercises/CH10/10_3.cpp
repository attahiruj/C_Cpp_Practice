/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.10_3
 *      Write a macro 'is_digit' that returns tru if aargument is a decimal digit.
 *      Write a second macro 'is_hex' that returns true if it is a hex digit(0-9, A-F, a-f).
 *      The second macro should reference the first
 * 
 * writen by Attahiru Jibril
 * 19/11/2023
************************************************************************************************************/

#define TRUE 1
#define FALSE 0

#define is_digit(x) (((x >= '0') && (x <= '9')) ? TRUE: FALSE) 

#define is_hex(x) ( (is_digit(x) || ( (x >= 'A') && (x <= 'F') ) || ( (x >= 'a') && (x <= 'f') ) ) )

#include <iostream>

int main(){

    const char i[] = {"0x00"};
    char digit = 'Z';
    if (is_hex(digit)){
        std::cout << TRUE << " -> True";
        return TRUE;
    }else{
        std::cout << FALSE << " -> False";
        return FALSE;
    }
    return 0;
}