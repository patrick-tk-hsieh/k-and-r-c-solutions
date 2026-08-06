#include <stdio.h>

int main(int argc, char *argv[]) {
    int c, blank, tab, newline;

    blank = 0;
    tab = 0;
    newline = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blank;
        }
        else if (c == '\t') {
            ++tab;
        }
        else if (c == '\n') {
            ++newline;
        }
    }
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blank, tab, newline);

    return 0;
}
