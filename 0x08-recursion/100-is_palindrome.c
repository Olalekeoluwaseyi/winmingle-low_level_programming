/**

 * Author: Olaleke Oluwaseyi Hezekiah

 * Program: WinMingle Community C Training

 * Description: 

 */

#include "main.h"

int is_palindrome(char *s){

    int len = _getlen(s);

    if (len <= 1)
        return 1;

    return palindrome_help(s, 0, len - 1);

}

int palindrome_help(char *s, int start, int end){

    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return palindrome_help(s, ++start, --end);
}

int _getlen(char *s){

    if (*s == '\0'){                                 return 0;                                  }

    return (_getlen(s + 1) + 1);    
 }
