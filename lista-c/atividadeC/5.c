#include <stdio.h>

int main() {
    float p1, p2;
    printf("Peso 1: ");
    scanf("%f", &p1);
    printf("Peso 2: ");
    scanf("%f", &p2);

    printf("Media = %.2f\n", (p1 + p2) / 2);
    return 0;
}
