/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include "main.h"

int add(int x, int y){
    int z;
    int count;
    int a;

    z = x + y;
    count = 1;

    if (z > 9){

        while (z / 10 != 0){
            z = z / 10;
           count =  count * 10;
        }
        
        z = x + y;

        while (count > 0){
            a = z / count;
            _putchar(a + '0');
            z = z % count;
            count = count / 10;
        }
    _putchar('\n');
    }

    return (x + y);
}
