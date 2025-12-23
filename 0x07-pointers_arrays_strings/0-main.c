/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: Write a function that fills memory with a constant byte.

 */

char *_memset(char *s, char b, unsigned int n){
    for (int i = 0; i < n; i++){
        
        s[i] = b;
    }

    return s;

}
