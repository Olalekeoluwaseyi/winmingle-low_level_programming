/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */
#include <stdio.h>

int main() {
    for (int i = 'a'; i <= 'z'; i++){
        if (i == 'e' || i == 'q'){
            continue;
        }
        else{
            putchar(i);
            putchar('\n');
        }
    }

    return 0;
}
