#include <stdio.h>

int main(void) {
    int idade = 18;
    const int MESES_POR_ANO = 12;

    idade++;
    printf("Idade: %d\n", idade);
    printf("Meses por ano: %d\n", MESES_POR_ANO);
    return 0;
}
