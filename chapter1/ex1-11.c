#include <stdio.h>

#define IN 1
#define OUT 0

/* Test cases:
    Empty input (EOF)
    Input containing only whitespace
    Leading whitespace
    Trailing whitespace
    Multiple consecutive whitespace
    Words separated by different whitespace
    Input ending without a trailing newline
*/

int main(int argc, char *argv[]) {
    int c, newline, word, character, state;

    newline = 0;
    word = 0;
    character = 0;

    state = OUT;
    while ((c = getchar()) != EOF) {
        ++character;
        if (c == '\n') {
            ++newline;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++word;
        }
    }
    printf("newlines: %d\nwords: %d\ncharacters: %d\n", newline, word, character);

    return 0;
}
