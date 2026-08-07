#include <stdio.h>

#define ASCII 128

int main(int argc, char *argv[]) {
    int c, i, j; 
    int char_freq[ASCII];

    for (i = 0; i < ASCII; ++i) {
        char_freq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++char_freq[c];
    }

    printf("\n<<ASCII Frequency Histogram>>\n\n");
    printf("ascii\t| count\n");

    for (i = 0; i < ASCII; ++i) {
        printf("%5d\t| ", i);

        for (j = 0; j < char_freq[i]; ++j) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}
