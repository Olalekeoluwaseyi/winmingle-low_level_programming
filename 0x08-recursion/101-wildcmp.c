/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include "main.h"

 int wildcmp(char *s1, char *s2){
    
     if( *s1 == '\0' && *s1 == '\0')
         return 1;

     if (*s2 == '*'){

        return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

        if (*s1 == *s2)
            return wildcmp(++s1, ++s2);
     }
    return (0);
 }
