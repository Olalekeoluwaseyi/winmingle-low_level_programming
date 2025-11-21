
#include "main.h"
/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 
 */

int print_sign(int n){
    
    if (n > 0){

        _putchar('+');
        _putchar(',');
        _putchar(' ');

        return _putchar('1');
    }
    else if (n == 0){

        _putchar('0');
        _putchar(',');
        _putchar(' ');

        return _putchar('1');
    }
    else{
        
        _putchar('-');
        _putchar(',');
        _putchar(' ');

        return _putchar('-'), _putchar('1');

    }
}
