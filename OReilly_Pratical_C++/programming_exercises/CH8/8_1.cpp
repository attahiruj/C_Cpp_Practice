/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.8_1   Print a checker board (8-by-8 grid). Each grid should be 5-by-3 characters wide .
 * 
 * writen by Attahiru Jibril
 * 12/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  8x8 grider v1.0 - 
 *      12/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      8x8 grider - A progrm that prints an 8-by-8 grid check boxes
 * 
 *  USAGE:
 *      1. Run the program
 * 
 *  RESTRICION:
 *      1. can only print 8x8 grid
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *          for: grid-row < max-grid-row, add row
 *              for: grid-column < max-grid-column, add column
 *                  for: cell-width < max-cell-width, add cell-width
 * 
 *                  for: cell-height < max-cell-height, add cell-height
 *                      for: grid-column < max-grid-column, add column
 *                          for: cell-width < max-cell-width, add cell-width
 *  END
************************************************************************************************************/
#include <iostream>
const int max_grid_column   = 8;
const int max_grid_row      = 8;
const int max_cell_width    = 5;
const int max_cell_height   = 3;

int main(){
    for(int grid_row = 0; grid_row < max_grid_row; ++grid_row){
        // print the main grid row seperator borders
        for(int grid_column = 0; grid_column < max_grid_column; ++grid_column){
            std::cout << "+";
            for(int cell_width = 0; cell_width < max_cell_width; ++cell_width){
                std::cout << "-";
            }
        }
        std::cout << "+";   //close boarder at right
        std::cout << "\n";
        //  print cell and column boarder seperating them
        for(int cell_height = 0; cell_height < max_cell_height; ++cell_height){
            for(int grid_column = 0; grid_column < max_grid_column; ++grid_column){
                std::cout << "|";
                for(int cell_width = 0; cell_width < max_cell_width; ++cell_width){
                    std::cout << " ";
                }
            }
            std::cout << "|";
            std::cout << "\n";
        }
    }
    // print closing grid row seperator
    for(int grid_column = 0; grid_column < max_grid_column; ++grid_column){
        std::cout << "+";
        for(int cell_width = 0; cell_width < max_cell_width; ++cell_width){
            std::cout << "-";
        }
    }
    std::cout << "+";
}