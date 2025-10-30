/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include <stdio.h>

int main(){
    
    for(int i = 0; i < 16; i++){
        if(i < 10){
            putchar(i + '0');
        }
        else{
            putchar(i - 10 + 'a');
        }

    }
    return 0;
}
