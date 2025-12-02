#include <stdio.h>

int main() {
    int idade;
    char sexo;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);

    if ((sexo == 'F' || sexo == 'f') && idade > 40)
        printf("Tem direito ao desconto.\n");
    else if ((sexo == 'M' || sexo == 'm') && idade > 50)
        printf("Tem direito ao desconto.\n");
    else
        printf("Nao tem desconto.\n");

    return 0;
}
