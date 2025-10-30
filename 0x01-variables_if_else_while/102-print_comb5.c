/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include <stdio.h>

int main(){
    for (int i = 0; i < 99; i++){

        for(int j = 1; j < 100; j++){

            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');

            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            if(!(i == 98 && j == 99)){

                putchar(',');
                putchar(' ');
            }

        }

    }
    putchar('\n');
    return 0;
}
