/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include "main.h"

void print_chessboard(char (*a)[8]){
    
    for (int j = 0; j < 8; j++){
        for(int i = 0; i < 8; i++){
            _putchar(*(*(a + j) + i));
        }
        _putchar('\n');

    }

}
