# 10. Laço de repetição `while`

## Objetivo
Repetir um bloco enquanto uma condição for verdadeira.

## Como funciona?

O `while` verifica a condição **antes** de executar o bloco. Se a condição já for falsa na primeira verificação, o corpo não é executado nenhuma vez.

## Sintaxe

```c
while (condicao) {
    /* comandos repetidos enquanto a condição for verdadeira */
}
```

É importante que algo dentro do laço ou antes dele faça a condição eventualmente ficar falsa. Caso contrário, pode ocorrer uma repetição infinita.

## Exemplo: contar de 1 a 5

```c
#include <stdio.h>

int main(void) {
    int contador = 1;

    while (contador <= 5) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}
```

Saída:

```text
1
2
3
4
5
```

O contador começa em 1. Enquanto `contador <= 5` for verdadeiro, imprime o número e aumenta o contador. Quando chega a 6, a condição fica falsa e o laço termina.

## Exemplo: condição falsa desde o início

```c
int contador = 10;

while (contador < 5) {
    printf("%d\n", contador);
}
```

O corpo não é executado, pois `10 < 5` é falso já na primeira verificação. Esse trecho é apenas ilustrativo; um programa completo precisaria estar dentro de `main()` e incluir os cabeçalhos necessários para usar `printf()`.

## Quando utilizar

Use `while` quando não souber antecipadamente quantas repetições serão necessárias e quiser continuar enquanto uma condição permanecer verdadeira, por exemplo, repetir uma tentativa enquanto uma regra não for atendida.

## `while` ou `for`?

Ambos podem repetir comandos. `for` costuma ser mais claro para uma contagem com início, limite e atualização bem definidos. `while` costuma destacar uma condição de continuidade. A escolha deve priorizar a clareza.

## Erros comuns

- Esquecer de atualizar uma variável usada na condição.
- Usar uma condição que nunca se torna falsa.
- Atualizar a variável de forma que a condição permaneça verdadeira.
- Supor que o corpo sempre será executado pelo menos uma vez.

## Boas práticas

Antes de executar, identifique a condição de parada. Teste mentalmente o valor inicial e o valor que encerra o laço. Se a repetição nunca terminar, interrompa a execução e revise a condição e a atualização.

## Exercícios

1. Imprima de 1 a 10 com `while`.
2. Conte de 10 até 1.
3. Leia um número inicial e continue somando 1 até alcançar um limite definido.
4. Crie um programa que repita uma opção de menu enquanto a opção de saída não for escolhida.

## Resumo

`while` testa a condição antes de cada volta. Pode executar zero vezes e precisa de uma condição de parada alcançável.

## Navegação do material

- **Anterior:** [9. Estrutura `switch-case`](09-switch-case.md)
- **Próxima:** [11. Boas práticas iniciais em C](11-boas-praticas.md)

### Links relacionados
- [6. Operadores](06-operadores.md)
- [7. Condicionais `if`, `else` e `else if`](07-condicionais-if-else.md)
- [8. Laço de repetição `for`](08-estrutura-for.md)

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
