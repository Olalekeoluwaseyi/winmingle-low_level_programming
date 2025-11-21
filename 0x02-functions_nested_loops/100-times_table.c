/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: printing of multiplication table 

 */

#include "main.h"
void print_times_table(int n){
    int product;
    int u;
    int t;
    int a;
    int count;

    if(n > 0 && n < 15){

         for (int i = 0; i <= n; i++){
            for (int j = 0; j <= 12; j++){

                product = i * j;

                if (product > 9){

                    a = product;
                    u = product;
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
 
              if (i != 12){
 
                  _putchar(',');
                  _putchar('\t');
              }//end of third if

          }//end of second if
          else {
                  _putchar(product + '0');

                  if(j != 12){
                    _putchar(',');
                    _putchar( '\t');

                  }
          }//end of else

            }//end of first for loop
            
         _putchar('\n');

        }//end of second for loop
    }//end of first if

}//end of the function
