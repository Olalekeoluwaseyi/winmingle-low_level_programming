/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: This program Compute and print the sum of all multiples of 3 or 5 below 1024 (excluded). Print the result followed by a newline.

 */
#include <stdio.h>

int main(void){
    int _sum;

    _sum = 0;
 for (int i = 1; i < 1024; i++){
    
     if((i % 3 != 0) || (i % 5 != 0)){
         
        _sum = _sum + i;
     }
 }

 printf("%d\n", _sum);

 return 0;

}
