#include <unistd.h>

int main() {
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    (void)write(2, quote, sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n")-1);
    return (1);


}
