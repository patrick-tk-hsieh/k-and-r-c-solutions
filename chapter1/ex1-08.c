#include <stdio.h>

int main(int argc, char *argv[]) {
    int c, blanks, tabs, lines;

    blanks = 0;
    tabs = 0;
    lines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        }
        else if (c == '\t') {
            ++tabs;
        }
        else if (c == '\n') {
            ++lines;
        }
    }
    printf("blanks: %d\ntabs: %d\nlines: %d\n", blanks, tabs, lines);

    return 0;
}
