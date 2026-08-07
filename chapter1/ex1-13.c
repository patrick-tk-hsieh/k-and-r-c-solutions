#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LEN 15

int main(int argc, char *argv[]) {
    int c, i, j, word_char, max, state;
    int word_len[MAX_LEN];

    word_char = 0;
    max = 0;
    for (i = 0; i < MAX_LEN; ++i)
        word_len[i] = 0;
 
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (word_char > 0 && word_char < MAX_LEN) {
                ++word_len[word_char - 1];
            }
            else if (word_char >= MAX_LEN) {
                ++word_len[MAX_LEN - 1];
            }

            word_char = 0;
        }
        else {
            if (state == OUT) {
                state = IN;
            }

            ++word_char;
        }
    }

    printf("\n<<Horizontal Histogram>>\n\n");
    printf("length\t| count\n");

    for (i = 0; i < MAX_LEN; ++i) {
        if (i != MAX_LEN - 1) {
            printf("%6d\t| ", i + 1);
        }
        else {
            printf("  >=%d\t| ", i + 1);
        }

        for (j = 0; j < word_len[i]; ++j) {
            putchar('*');
        }

        putchar('\n');
    }

    printf("\n<<Vertical Histogram>>\n\n");

    for (i = 0; i < MAX_LEN; ++i) {
        if (word_len[i] > max) {
            max = word_len[i];
        }
    }

    printf("count\n");

    for (i = max; i > 0; --i) {
        printf("%6d\t|", i);

        for (j = 0; j < MAX_LEN; ++j) {
            if (word_len[j] >= i) {
                printf("  *");
            }
            else {
                printf("   ");
            }
        }

        putchar('\n');
    }

    for (i = 0; i < 57; ++i) {
        putchar('-');
    }

    printf("\nlength\t|");

    for (i = 0; i < MAX_LEN; ++i) {
        if (i != MAX_LEN - 1) {
            printf("%3d", i + 1);
        }
        else {
            printf(" >=%d\n", i + 1);
        }
    }

    return 0;
}
