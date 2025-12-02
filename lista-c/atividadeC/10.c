#include <stdio.h>

int main() {
    int a, b;
    printf("Idade 1: ");
    scanf("%d", &a);
    printf("Idade 2: ");
    scanf("%d", &b);

    if (a > b)
        printf("Pessoa 1 e mais velha\n");
    else if (b > a)
        printf("Pessoa 2 e mais velha\n");
    else
        printf("Mesma idade\n");

    return 0;
}
