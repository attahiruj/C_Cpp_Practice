/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.10_4
 *      Write a preprocessor macro that swaps two integers. 
 *      (If you're a good hacker, wite one that doesnt use a temporary variable)
 * 
 * writen by Attahiru Jibril
 * 20/11/2023
************************************************************************************************************/

/*
^ ia a XOR Operator

XOR - Truth table:
A	B	A XOR B
0	0	    0
0	1	    1
1	0	    1
1	1	    0

In bitwise XOR:
If both bits are 0 or both bits are 1, the result is 0.
If one bit is 0 and the other is 1, the result is 1.

Now, let's see the step-by-step XOR swapping with values:
Initial values:
a = 5 (binary: 0101)
b = 10 (binary: 1010)

First XOR operation: a ^= b:
a becomes 0101 XOR 1010, which is 1111 (15 in decimal).
b remains 1010.

Second XOR operation: b ^= a:
b becomes 1010 XOR 1111, which is 0101 (5 in decimal).
a remains 1111.

Third XOR operation: a ^= b:
a becomes 1111 XOR 0101, which is 1010 (10 in decimal).
b remains 0101.

Now, the values of a and b are swapped. This XOR swapping technique works without needing a temporary variable.
*/

#define SWAP(x,y) do { (x) ^= (y); (y) ^= (x); (x) ^= (y); } while(0)

#include <iostream>

int main(){
    int x = 5;
    int y = 10;
    SWAP(x, y);
    std::cout << "\nx = " << x << "\ny = " << y;
}