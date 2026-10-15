#include <stdio.h>

int main(void) {
    int a = 7;
    int b = 2;

    printf("Soma: %d\n", a + b);
    printf("Divisao inteira: %d\n", a / b);
    printf("Resto: %d\n", a % b);
    printf("A maior que B: %d\n", a > b);
    printf("A maior que B e B positivo: %d\n", a > b && b > 0);
    return 0;
}
