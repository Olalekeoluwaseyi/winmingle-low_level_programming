/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */
#include <stdio.h>
#include "main.h"

void print_to_98(int n){

        int t;
        int u;
        int count;
        int a;

    if (n >= 0 && n < 98){

        for (int i = n; i <= 98; i++){
            if (i > 9){
                _putchar((i / 10) +'0');
                _putchar((i % 10) +'0');

                if (i != 98) _putchar(',');
            }
            else {
                _putchar(i + '0');

               if (i != 98)  _putchar(',');
            }
        }
        
    }
    else if (n > 98){

        for (int i = n; i >= 98; i--){
            a = i;
            u = i;
            count = 1;
            while ((a / 10) > 0){
                //printf("a is: %d \n", a);

                count = count * 10;
                a = a / 10;
                
             }//end of while
            
            //_putchar('\n');

            while (count > 0){
                t = u / count;
                u = u % count;
                _putchar(t +'0');
                count = count / 10;      
            }//end of while

            if (i != 98){

                _putchar(',');
                _putchar(' ');
            }
           // _putchar('\n');
        }
    }//end of else if
    else{
            
         
        for (int i = n; i <= 98; i++){

            a = i;
            u = i;
            count = 1;

            if (i < 0){
                a = i * -1;
                u = i * -1;
                _putchar('-');
            }


            while ((a / 10) > 0){
                //printf("a is: %d \n", a);

                count = count * 10;
                a = a / 10;
                
             }//end of while
            
            //_putchar('\n');

            while (count > 0){
                
                t = u / count;
                u = u % count;
                _putchar(t +'0');
                count = count / 10;      
            }//end of while

            if (i != 98){

                _putchar(',');
                _putchar(' ');
            }
           // _putchar('\n');
        }
    }
}
