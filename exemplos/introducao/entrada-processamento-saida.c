#include <stdio.h>

int main(void) {
    int primeiro;
    int segundo;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &primeiro, &segundo) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Soma: %d\n", primeiro + segundo);
    return 0;
}
