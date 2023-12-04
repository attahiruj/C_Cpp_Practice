/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * EX.11A
 *      Setting, Clearing and testing Bits
 * 
 * writen by Attahiru Jibril
 * 03/12/2023
************************************************************************************************************/

#include <iostream>

int main(){
    const int ERROR         (1 << 0);
    const int FRAMING_ERROR (1 << 1);
    const int PARITY_ERROR  (1 << 2);
    const int CAARRIER_LOST (1 << 3);
    const int CHNNEL_DOWN   (1 << 4);
    
    char FLAG = 0;
    FLAG |= ERROR;      //Setting bit
    FLAG &= ~ERROR;     // Clearing bit [00000001 -> 0 &= ~11111110 ]
    if((FLAG & ERROR) != 0){
        std::cerr << "Error detected";
    }else{
        std::cerr << "No error detected";
    }
}