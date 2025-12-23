/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */
#include "stdio.h"

unsigned int _strspn(char *s, char *accept)
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
                break;
            }
            else{
                if(i > 0 && accept[j +1] == '\0') {
                   // printf("%c ≠ %c and\ncount is %d\n", s[i], accept[j], count);
                    return count;
                            }
            }
            j++;
        }
        i++;
    }
    return (count);
}
