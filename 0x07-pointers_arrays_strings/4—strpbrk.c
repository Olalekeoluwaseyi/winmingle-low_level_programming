/**

 * Author: Olaleke Oluwaseyi 

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */
#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    int stop;
    unsigned int count, i, j;

    stop = 1;
    count = i = 0;
    while ( s[i] != '\0'){
        j = 0;

        while (accept[j] != '\0'){

            if(s[i] == accept[j]){
                //printf("%c = %c\n",s[i], accept[j]);
                j++;
                count++;
                s += i;
                return s;
            }
            j++;
        }
        i++;
    }
    return s;
}
