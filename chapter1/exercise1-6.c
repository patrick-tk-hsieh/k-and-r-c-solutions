#include <stdio.h>

int main(int argc, char *argv[]) {
    int c;
    c = getchar();
    printf("the expression 'getchar() != EOF' is %d\n", c != EOF);

    // Ctrl + D represents the EOF in terminal.
    while (c != EOF) {
        c = getchar();
        printf("the expression 'getchar() != EOF' is %d\n", c != EOF);
    }

    return 0;
}
