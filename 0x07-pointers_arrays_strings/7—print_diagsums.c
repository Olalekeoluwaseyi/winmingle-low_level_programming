/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include <stdio.h>
#include "main.h"

void print_diagsums(int *a, int size){

    int ldsum;
    int md;
    int mdsum;
    md = size - 1;
    ldsum = 0;
    mdsum = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if(i == j){

                ldsum += *(a + i * size + j);
            }
            if (md == j){
                
                mdsum += *(a + i * size + j);
                printf("%d\n", mdsum);
            }
        }
        md--;

    }
    //printf("%d, %d\n", ldsum, mdsum);
}
