/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.8_4   Write a program to print out the multiplication table
 * 
 * writen by Attahiru Jibril
 * 12/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  Parallel-Resistoance-Calculator: 
 *      12/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      Parallel-Resistoance-Calculator: - A progrm that prints out the multiplication table of set range
 * 
 *  USAGE:
 *      1. Input table range to generate
 *      2. table get generated
 * 
 *  RESTRICION:
 *      1. !
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *          user inputs table range
 *          for range of user input:
 *              print out the multiplication table
 *          end
 *  END
************************************************************************************************************/

#include <iostream>

int main(){
    std::cout << "***********************************\n";
    std::cout << "*  Multiplication Table Generator *\n";
    std::cout << "***********************************\n";
    std::cout << "\n-> Enter a table range and press enter\n";

    int table_range = 0;
    std::cin >> table_range;
    if (table_range <= 0){
        std::cout << "please input an integer value grater than 0";
        return -1;
    }else if(table_range > 0){
        std::cout << "\n";
        std::cout << " " <<table_range << " - Times Table:" << "\n\n";
        
        for(int i=1; i<= table_range; ++i){     //print table rows
            for(int j=1; j<= table_range; ++j){ //print table columns
                std::cout << " " << i << " x " << j << " = " << i*j << "\t|";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
}