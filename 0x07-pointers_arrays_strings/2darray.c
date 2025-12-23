#include <stdio.h>

int main(void){
    char a[3][3] = {{'a', 'b', 'c'},
        {'e', 'f', 'g'},
        {'i', 'j', 'k'}
    };

    printf("%cl\n", *(0x7fd91090e5));

    return(0);
}
