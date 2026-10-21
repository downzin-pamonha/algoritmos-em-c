#include <stdio.h>

int somar(int primeiro, int segundo) {
    return primeiro + segundo;
}

int main(void) {
    int resultado = somar(7, 3);

    printf("Soma: %d\n", resultado);
    return 0;
}
