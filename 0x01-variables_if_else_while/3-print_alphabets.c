/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */
#include <stdio.h>

int main(){
    int j;
    j = 'A';

    for (int i = 'a'; i <= 'z'; i++){
        putchar(i);
        putchar(j);
        j++;
        putchar('\n');
    }

    return 0;

}
