#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ... , 300 */
int main(void) {
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("\n\nFahrenheit-Celsius Table\n\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.0f\t%8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("\n");

    /* Celsius-Fahrenheit Table */
    printf("\n\nCelsius-Fahrenheit Table\n\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * (celsius + 32.0);
        printf("%6.0f\t%8.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    printf("\n");
}