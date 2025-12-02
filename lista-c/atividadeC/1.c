#include <stdio.h>

int main() {
    float metros;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    printf("Em centimetros: %.2f\n", metros * 100);
    return 0;
}
