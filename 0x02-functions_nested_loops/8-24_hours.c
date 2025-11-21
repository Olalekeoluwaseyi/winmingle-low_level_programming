/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include "main.h"

void jack_bauer(void){
    
    int thour;
    int uhour;
    int tmin;
    int umin;

    for (int i = 0; i <= 23; i++){
        
        for (int j = 0; j <= 59; j++){
            
            thour = i / 10;
            uhour = i % 10;

            tmin = j / 10;
            umin = j % 10;

            _putchar(thour + '0');
            _putchar(uhour + '0');
            _putchar(':');
            _putchar(tmin + '0');
            _putchar(umin + '0');
            _putchar('\n');



        }
    }

}
