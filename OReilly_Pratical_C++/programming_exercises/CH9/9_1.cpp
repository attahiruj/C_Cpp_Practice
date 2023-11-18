/***********************************************************************************************************
 * O'Reilly - Pratical C++ Programming.                                                   
 * PQ.9_1   Write a procedure that counts the number of word in a string.
 *          (your documentation should describe how you define a word).
 *          Write a brogram to test your procedure.
 * 
 * writen by Attahiru Jibril
 * 15/11/2023
************************************************************************************************************/

/***********************************************************************************************************
 *                                  SPECIFICATION
 *  StringWordCounter: 
 *      15/11/2023  - Attahiru Jibril
 *      WARNING: This is a preliminary specification. Any resemblance to any software living or
 *               Dead is purely coincedental.
 * 
 *      StringWordCounter: - A progrm that number of words in a string.
 * 
 *  USAGE:
 *      1. run program and input words seperated by a special character ,./ or space
 *      2. specify word seperator you used.
 *      3. number of word in string is outputed.
 * 
 *  RESTRICION:
 *      1. string must not be more than 1000 characters.
 *      2. any special character other than the specified is considered path of a word.
 *    
 *  
*************************************************************************************************************/

/************************************************************************************************************
 *                                   CODE DESIGN
 *  
 *  START
 *          Procedure start:
 *              read string
 *              read word seperator
 *              while string is not at end char:
 *                  increamet word count when seperator is encountered
 *              return word count
 *          Procedure end
 * 
 *          Program start:
 *              input sentence
 *              input word seperator
 *              call word counter procedure
 *              output word count
 *          Program end
 *  END
************************************************************************************************************/

#include <iostream>

/// @brief counts number of words in an inputed text
/// @param string the text to input
/// @param word_seperator what is used to seperate the words eg. , . / _ (no support for space)
/// @return number of words in text
int get_word_count(char string[], char word_seperator){
    int word_count = 1;
    for(int i = 0; string[i] != '\0'; ++i){
        if(string[i] == word_seperator){
            ++word_count;
        }
    }
    return word_count;
}
int main(){
    std::cout << "***********************************\n";
    std::cout << "*        StringWordCounter        *\n";
    std::cout << "***********************************\n";
    

    const int MAX_CHAR = 1000;
    char string_input[MAX_CHAR];
    char word_seperator;
    int count = 0;

    std::cout << "\n-> Enter string of words(without spaes, 1000 char max) and press enter\n";
    std::cin.getline(string_input, sizeof(string_input));
    
    std::cout << "\n-> Enter word seperator (eg ',' '.' '/' ...) and press enter\n";
    std::cin >> word_seperator;

    count = get_word_count(string_input, word_seperator);
    std::cout << "word count is " << count;
}