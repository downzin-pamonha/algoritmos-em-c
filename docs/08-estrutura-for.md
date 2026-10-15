# 8. Laço de repetição `for`

## Objetivo
Repetir comandos, entendendo inicialização, condição e atualização.

## O que é repetição?

Um laço executa um bloco várias vezes. O `for` é muito usado quando a repetição tem um contador ou uma quantidade de etapas conhecida.

## Sintaxe

```c
for (inicializacao; condicao; atualizacao) {
    /* comandos repetidos */
}
```

- **Inicialização:** acontece uma vez, no começo.
- **Condição:** é verificada antes de cada repetição. Se for falsa, o laço termina.
- **Atualização:** ocorre depois do bloco, antes de testar a condição novamente.

## Exemplo: contar de 1 a 5

```c
#include <stdio.h>

int main(void) {
    int contador;

    for (contador = 1; contador <= 5; contador++) {
        printf("%d\n", contador);
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

O contador começa em 1. Enquanto for menor ou igual a 5, o programa imprime seu valor. `contador++` aumenta o contador em 1 ao fim de cada repetição.

## Exemplo: somar de 1 a 5

```c
#include <stdio.h>

int main(void) {
    int contador;
    int soma = 0;

    for (contador = 1; contador <= 5; contador++) {
        soma = soma + contador;
    }

    printf("Soma: %d\n", soma);
    return 0;
}
```

Saída:

```text
Soma: 15
```

A variável `soma` começa em zero. Em cada volta, recebe o valor anterior mais o contador: `1`, depois `1 + 2`, depois `1 + 2 + 3`, e assim por diante.

## Quando utilizar

Use `for` quando a contagem ou a quantidade de repetições puder ser descrita de forma clara, como contar de 1 a 10 ou somar uma sequência.

## Erros comuns

- Usar uma condição que nunca fica falsa, causando repetição infinita.
- Atualizar o contador na direção errada.
- Usar `<` quando a intenção era incluir o limite com `<=`.
- Esquecer de inicializar o acumulador, como `soma = 0`.

## Boas práticas

Use nomes claros para contador e acumulador. Verifique manualmente a primeira e a última volta do laço. Evite alterar o contador em vários lugares diferentes sem necessidade.

## Exercícios

1. Mostre os números de 1 a 10.
2. Mostre apenas os números pares de 2 a 20.
3. Leia um inteiro positivo `n` e calcule a soma de 1 até `n`.
4. Leia cinco números e conte quantos são positivos.

## Comparação com `while`

O `for` reúne inicialização, condição e atualização na mesma linha, o que costuma facilitar laços com contador. `while` destaca a condição e é conveniente quando a repetição depende de uma condição que pode mudar durante a execução.

## Resumo

`for` repete um bloco. A inicialização ocorre uma vez, a condição controla a continuidade e a atualização prepara a próxima volta.

## Navegação do material

- **Anterior:** [7. Condicionais `if`, `else` e `else if`](07-condicionais-if-else.md)
- **Próxima:** [9. Estrutura `switch-case`](09-switch-case.md)

### Links relacionados
- [6. Operadores](06-operadores.md)
- [7. Condicionais `if`, `else` e `else if`](07-condicionais-if-else.md)
- [10. Laço de repetição `while`](10-estrutura-while.md)

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
