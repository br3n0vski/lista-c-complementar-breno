#include <stdio.h>

int triplo(int x) {
    return x * 3;
}

int main() {
    int n;
    printf("Numero: ");
  scanf("%d", &n);
  
    int resultado = triplo(n);
    printf("O triplo de %d eh %d\n", n, resultado);
    return 0;
}