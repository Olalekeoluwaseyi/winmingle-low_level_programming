/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: searching for the first occurance of a word in a sebtence.

 */
#include <stdio.h>
#include "main.h"

char *_strstr(char *haystack, char *needle){
    
    while (*haystack != '\0') {

        if (*haystack == *needle){
            for (int i = 0; needle[i] != '\0'; i++){
                
                if (needle[i + 1] == '\0'){
                
                    return haystack;
                }
            }
        }
        
        haystack = haystack + 1;
    }
    return haystack;
}
