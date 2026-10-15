#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("Digite dois inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Soma: %d\n", a + b);
    return 0;
}
