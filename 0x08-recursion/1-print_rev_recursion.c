/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */
/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include "main.h"

void _print_rev_recursion(char *s){
    
    int i;

    if (*s == '\0'){
        
        _putchar('\n');
        return;
    }
    
   _print_rev_recursion(s + 1);
   _putchar(*s);
}


