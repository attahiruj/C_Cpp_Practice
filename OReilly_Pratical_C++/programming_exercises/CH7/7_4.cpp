/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.7_4   Write a program to add an 8% sales tax to agiven amount and round the result to the 
 *          nearest     penny. 
 * 
 * writen by Attahiru Jibril
 * 5/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  SaTaCa v1.0 - 
 *      5/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      SaTaCa (Sales Tax Calculator) is a program that returns the cost of a sale item plus tax
 * 
 *  USAGE:
 *      1. Input cost of item
 *      2. Cost plus sales tax is returned
 * 
 *  RESTRICION:
 *      1. fixed preprogrammed sales tax of 8%
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *      Read cost of item
 *      calculate sales tax of item
 *      Add sales tax to item price
 *      Return calculated total cost
 *  END
************************************************************************************************************/
#include <iostream>

int main(){

    const float tax_rate = 8.0/100.0;
    float item_price = 0;
    float total_price = 0;
    char input;

    std::cout << "******************************\n";
    std::cout << "*            SaTaCa          *\n";
    std::cout << "******************************\n";

    /*Read item_price  from user*/
    std::cout << "\n-> Enter item's price: ";
    std::cin >> item_price;
    if (item_price > 0.0){
        float tax_price = 0;
        tax_price = tax_rate*item_price;
        total_price = tax_price + item_price;
        std::cout << "-> Total Price + tax is: $" << total_price << "\n";
    }else{
        std::cout << "Price must be grater than 0! \n";
    }
    
    
}