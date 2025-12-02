#include <stdio.h>

int main() {
    float valor;
    printf("Valor do produto: ");
    scanf("%f", &valor);

    printf("Com desconto: %.2f\n", valor * 0.90);
    return 0;
}
