#include <stdio.h>

float soma(float a, float b, float c) {
    return a + b + c;
}

int main() {
    float x, y, z;
    printf("Digite tres valores: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("Soma = %.2f\n", soma(x, y, z));
    return 0;
}
