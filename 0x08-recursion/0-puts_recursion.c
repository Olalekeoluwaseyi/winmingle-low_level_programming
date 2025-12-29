#include "main.h"

/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

void _puts_recursion(char *s){
    
    if (*s == '\0'){
        _putchar('\n');
        return;
    }
    
    _putchar(*s);
    _puts_recursion(s + 1);
    return; 
}
