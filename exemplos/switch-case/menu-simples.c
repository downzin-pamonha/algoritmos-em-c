#include <stdio.h>

int main(void) {
    int opcao;

    printf("1 - Iniciar\n2 - Ajuda\n3 - Sair\nEscolha: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            printf("Iniciando...\n");
            break;
        case 2:
            printf("Ajuda selecionada.\n");
            break;
        case 3:
            printf("Encerrando...\n");
            break;
        default:
            printf("Opcao desconhecida.\n");
            break;
    }

    return 0;
}
