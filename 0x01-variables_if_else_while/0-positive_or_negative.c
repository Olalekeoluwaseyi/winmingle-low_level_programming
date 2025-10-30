/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: This file is about kearning C basic 

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n;

    n = rand();

    if(n > 0) {
        printf("%d is positive", n);
    
    }
    else if(n < 0) {
        printf("%d is negetive", n);

    }
    else {
        printf("%d is zero", n);

    }

    return 0;

}
