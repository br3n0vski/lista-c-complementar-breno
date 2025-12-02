#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Nome: ");
    scanf("%s", nome);
    printf("Idade: ");
    scanf("%d", &idade);

    printf("Nome: %s | Idade: %d\n", nome, idade);
    return 0;
}
