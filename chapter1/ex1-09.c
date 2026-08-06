#include <stdio.h>

int main(int argc, char *argv[]) {
    int c, blanks;

    blanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (blanks == 0) {
                putchar(c);
            }

            ++blanks;
        }
        else {
            putchar(c);
            blanks = 0;
        }
    }

    return 0;
}
