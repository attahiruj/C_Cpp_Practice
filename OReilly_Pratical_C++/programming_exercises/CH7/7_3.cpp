/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.7_3   A serial transmission line can transmit 960 characters a second.
 *          Write a program that will calculate how long it will take to send a file given its file size.
 *          Try it on a 400MB (419,430,400 byte) file. Use appropriate unit. (A 400MB file takes days.)  
 * 
 * writen by Attahiru Jibril
 * 23/10/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  TX TTT v1.0 - 
 *      23/10/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      TX TTT is a program that returns the time it will take to Transmit (TimeToTransmit) a file.
 *      it accepts file sizes in bytes, KB, MB and GB.
 * 
 *  USAGE:
 *      1. Input file size.
 *      2. select the data size (b, KB, MB, GB)
 *      3. The resulting TTT is displayed.
 * 
 *  RESTRICION:
 *      1. User is must enter file size as integers (without commas or other characters other than numbers).
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  START
 *      Read file size
 *      Read file unit
 *      Check if unit is b, kb, mb or gb:
 *          calculate TTT accordingly
 *          break
 *  END
************************************************************************************************************/
#include <iostream>
int main(){
    const int tx_speed = 960;       //convert from char/sec -> bytes/sec
    char size_unit;                 //B, KB, MB, GB
    unsigned long long unit = 0;    //1-b, 1000-kb, 1000000-mb ....
    unsigned long long file_size = 0;

    //time to transmit in sec, min, hour and day.
    unsigned long long ttt_sec = 0;
    unsigned long long ttt_min = 0;
    unsigned long long ttt_hour = 0;
    unsigned long long ttt_day = 0;
    
    std::cout << "******************************\n";
    std::cout << "*         TX  <-> TTT        *\n";
    std::cout << "******************************\n";
    /*Read file size  from user*/
    std::cout << "\n-> Enter file size(without unit): ";
    std::cin >> file_size;

    /*Read file unit  from user*/
    std::cout << "\n-> Enter size unit(B->byte | K->kilobyte | M->megabyte | G->gigabyte): ";
    std::cin >> size_unit;

    //check if file is b,kb,mb og gb and multiply unit by scale
    if(size_unit == 'B' || size_unit == 'b'){
        unit = 1;
    }else if(size_unit == 'K' || size_unit == 'k'){
        unit = 1000;
    }else if(size_unit == 'M' || size_unit == 'm'){
        unit = 1000000;
    }else if(size_unit == 'G' || size_unit == 'g'){
        unit = 1000000000;
    }

    /*
        calculate ttt based on file size.
        ->time(sec) = size * unit/speed<-
    */
    ttt_sec = (file_size * unit) / tx_speed;
    ttt_min = ttt_sec / 60;
    ttt_hour = ttt_min / 60;
    ttt_day = ttt_hour / 24;

    //only return day if hour is greater than 24
    if(ttt_hour > 24){
        std::cout << "\n-> "<< file_size << size_unit << " -> " 
                            << ttt_day << "D, " 
                            << ttt_hour%24 << "H, " 
                            << ttt_min%60 << "M, " 
                            << ttt_sec%60 << "sec";
    }
    //only return hour if min is greater than 60
    else if(ttt_min > 60){
        std::cout << "\n-> "<< file_size << size_unit << " -> " 
                            << ttt_hour << "H, " 
                            << ttt_min%60 << "M, " 
                            << ttt_sec%60 << "sec";
    }
    //only return min if sec is greater than 60
    else if(ttt_sec > 60){
        std::cout << "\n-> "<< file_size << size_unit << " -> " 
                            << ttt_min << "M, " 
                            << ttt_sec%60 << "sec";
    }
    //return sec by default.
    else{
        std::cout << "\n-> "<< file_size << size_unit << " -> " 
                            << ttt_sec << "sec";
    }
    return 0;
}