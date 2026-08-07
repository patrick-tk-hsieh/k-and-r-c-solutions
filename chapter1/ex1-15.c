#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

float temperature_converter(float fahr);

int main(int argc, char *argv[]) {
    float fahr, celsius;

    printf("Fahrenheit\tCelsius\n");

    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = temperature_converter(fahr);
        printf("%10.0f %12.1f\n", fahr, celsius);

        fahr = fahr + STEP;
    }

    return 0;
}

float temperature_converter(float fahr) {
    float celsius;

    celsius = (fahr - 32.0) * (5.0 / 9.0);

    return celsius;
}
