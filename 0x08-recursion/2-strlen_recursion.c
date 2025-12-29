/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */
#include "main.h"

int _strlen_recursion(char *s){
    
    if (*s == '\0'){
        _putchar('\n');
        return 0;
    }
    
    return (_strlen_recursion(s + 1) + 1);

}
