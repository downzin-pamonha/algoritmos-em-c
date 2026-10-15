# 9. Estrutura `switch-case`

## Objetivo
Selecionar um bloco entre várias alternativas baseadas no valor de uma expressão.

## Como funciona?

`switch` avalia uma expressão inteira ou compatível com os tipos permitidos e procura um `case` com valor correspondente. `break` encerra o `switch`; sem ele, a execução pode continuar para os próximos casos. `default` é opcional e trata valores sem correspondência.

## Sintaxe

```c
switch (opcao) {
    case 1:
        /* comandos da opção 1 */
        break;
    case 2:
        /* comandos da opção 2 */
        break;
    default:
        /* opção não reconhecida */
        break;
}
```

## Exemplo: menu simples

```c
#include <stdio.h>

int main(void) {
    int opcao;

    printf("1 - Iniciar\n");
    printf("2 - Ajuda\n");
    printf("3 - Sair\n");
    printf("Escolha: ");

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
```

Exemplo de execução para entrada `2`:

```text
1 - Iniciar
2 - Ajuda
3 - Sair
Escolha: 2
Ajuda selecionada.
```

## Papel de cada parte

- `switch (opcao)`: avalia o valor de `opcao`.
- `case 1:`: inicia o bloco associado ao valor 1.
- `break;`: sai do `switch` para não continuar executando os próximos casos.
- `default:`: é usado quando nenhum caso corresponde.
- `;`: termina cada instrução.

## `switch` ou `if/else`?

Use `switch` para alternativas discretas, como número de uma opção de menu. Use `if/else` para condições e intervalos, como `nota >= 7` ou `idade < 18`. `switch` não substitui toda condição possível.

## Erros comuns

- Esquecer `break` e executar acidentalmente o código do próximo caso.
- Repetir valores de `case`.
- Esperar que `case 1 ... 5` seja sintaxe C padrão; prefira casos separados ou uma condição `if`.
- Não tratar uma opção inesperada com `default`.

## Exercícios

1. Crie um menu com três opções e mostre a opção escolhida.
2. Leia um número de 1 a 7 e imprima o dia da semana correspondente; defina a convenção de numeração.
3. Faça uma calculadora de duas operações com menu, usando `switch` para escolher a operação.

## Resumo

`switch` escolhe entre valores específicos. `case` representa cada opção, `break` encerra o bloco selecionado e `default` trata os valores não listados.

## Navegação do material

- **Anterior:** [8. Laço de repetição `for`](08-estrutura-for.md)
- **Próxima:** [10. Laço de repetição `while`](10-estrutura-while.md)

### Links relacionados
- [5. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)
- [6. Operadores](06-operadores.md)
- [7. Condicionais `if`, `else` e `else if`](07-condicionais-if-else.md)

### Todos os documentos
- [1. Introdução a algoritmos e lógica de programação](01-introducao-algoritmos.md)
- [2. Primeiro programa em C](02-primeiro-programa-c.md)
- [3. Variáveis e constantes](03-variaveis-e-constantes.md)
- [4. Tipos de dados](04-tipos-de-dados.md)
- [5. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)
- [6. Operadores](06-operadores.md)
- [7. Condicionais `if`, `else` e `else if`](07-condicionais-if-else.md)
- [8. Laço de repetição `for`](08-estrutura-for.md)
- [9. Estrutura `switch-case`](09-switch-case.md)
- [10. Laço de repetição `while`](10-estrutura-while.md)
- [11. Boas práticas iniciais em C](11-boas-praticas.md)

- [Índice central da documentação](README.md)
- [README principal do repositório](../README.md)
