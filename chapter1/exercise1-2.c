#include <stdio.h>

int main(int argc, char *argv[]) {

    // It turns out that \c is not a valid escape sequence.
    printf("hello, world\c");

    return 0;
}
