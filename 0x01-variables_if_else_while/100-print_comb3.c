/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++){
        for(int j = 1; j < 10; j++){
            if (i < j){
                
                 putchar(i + '0');
                 putchar(j + '0');

                 putchar(' ');
            }
        }
    }
    return 0;
}
