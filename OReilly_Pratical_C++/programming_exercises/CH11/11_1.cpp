/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.11_1
 *      Write a set of inline function, clear-bit and test_bit to go with the set_bit operartion defined 
 *      in example 11-2. write a main program to test the function
 * 
 * writen by Attahiru Jibril
 * 04/12/2023
************************************************************************************************************/

#include <iostream>
#include <bitset>

/**
 * @brief The function sets a specific bit in an integer variable to 1.
 * @param byte The parameter "byte" is a reference to an integer variable.
 * @param bit The "bit" parameter is an integer that represents the position of the bit that needs to
 * be set in the "byte" variable.
 */
inline void set_bit(int &byte, const int bit){
    byte |= (1 << bit);
}

/**
 * @brief The function clears a specific bit in an integer.
 * @param byte The byte parameter is a reference to an integer variable that represents a byte of data.
 * @param bit The `bit` parameter is an integer that represents the position of the bit that needs to
 * be cleared.
 */
inline void clear_bit(int &byte, const int bit){
    byte &= ~(1 << bit);
}

/**
 * @brief The function "test_bit" checks if a specific bit in a given byte is set or not.
 * 
 * @param byte The byte parameter is an integer that represents a byte of data.
 * @param bit The bit parameter is an integer representing the position of the bit to be tested in the
 * byte.
 * 
 * @return a boolean value. It returns true if the specified bit in the given byte is set (1), and
 * false if the bit is not set (0).
 */
inline bool test_bit(const int &byte, const int bit){
    int flag = 0;
    flag |= (1 << bit);
    if((flag & byte) != 0){
        return true;
    }else{
        return false;
    }
}


int main(){
    /* The code is demonstrating the usage of the inline functions `set_bit`, `clear_bit`, and
    `test_bit`. */
    int var = 0b10000000;
    set_bit(var, 2);
    clear_bit(var, 7);
    
    std::cout << "0b";
    std::bitset<8> x(var);
    std::cout << x << std::endl;
    std::cout << "bit 2 state: "<< test_bit(var, 2);
}