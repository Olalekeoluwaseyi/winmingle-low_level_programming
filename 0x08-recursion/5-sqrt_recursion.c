/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */
#include "main.h"

int _sqrt_recursion(int n){

    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return n;

    return sqrtr(2, n, n);
}



int sqrtr(int start, int end, int n){

    long int middle;

    if (end >= start){
        
        middle = start + (end - start) / 2;

        if (middle * middle == n)
            return middle;

        if ( middle * middle > n)
            return sqrtr(start, middle - 1, n);

        if (middle * middle < n)
           return sqrtr(middle + 1, end, n);
    }

    return -1;
}

