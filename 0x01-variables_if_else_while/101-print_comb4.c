/**
 * 

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include <stdio.h>

int main(){

    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 10; j++){

            for (int k = 0; k < 10; k++){
                if(i < j && j < k){
                    printf("%d%d%d, ", i, j, k);
                }
            }
        }
    }
}
