/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: Print the first 50 Fibonacci numbers, starting with 1 and 2, separated by , and followed by newline.

 */
#include <stdio.h>

int main(void){
   long int next;
   long int first;
   long int second;

    first = 1;
    second = 2;
    for(int i = 1; i <= 50; i++){

        if(i < 3){

            printf("%d, ", i);
        }
        else{
            next = first + second;
            printf("%ld", next);
            first = second;
            second = next;

            if(i != 50) printf(", ");
        }
    }
    return 0;
}
