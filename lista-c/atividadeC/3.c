#include <stdio.h>

int main() {
    float c;
    printf("Celsius: ");
    scanf("%f", &c);

    float f = (c * 9 / 5) + 32;
    printf("Fahrenheit: %.2f\n", f);
    return 0;
}
