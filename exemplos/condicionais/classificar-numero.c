#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (numero > 0) {
        printf("Positivo\n");
    } else if (numero < 0) {
        printf("Negativo\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
