#include <stdio.h>

int main(void) {
    int contador = 1;
    int soma = 0;

    while (contador <= 5) {
        soma += contador;
        contador++;
    }

    printf("Soma de 1 a 5: %d\n", soma);
    return 0;
}
