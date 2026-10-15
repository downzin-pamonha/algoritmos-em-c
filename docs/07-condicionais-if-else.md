# 7. Condicionais `if`, `else` e `else if`

## Objetivo
Fazer o programa escolher quais comandos executar com base em uma condição.

## Como funciona?

Uma condição é uma expressão que pode ser verdadeira ou falsa. `if` executa um bloco quando a condição é verdadeira. `else` oferece uma alternativa. `else if` permite testar outra condição quando as anteriores não foram atendidas.

## Sintaxe

```c
if (condicao) {
    /* comandos se for verdadeira */
} else if (outra_condicao) {
    /* comandos se a primeira falhar e a segunda for verdadeira */
} else {
    /* alternativa final */
}
```

As chaves delimitam os comandos de cada bloco. Mesmo quando existe apenas um comando, usá-las ajuda a evitar erros ao alterar o código.

## Exemplo: idade

```c
#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a idade: ");
    if (scanf("%d", &idade) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (idade < 0) {
        printf("Idade invalida.\n");
    } else if (idade >= 18) {
        printf("Maior de idade.\n");
    } else {
        printf("Menor de idade.\n");
    }

    return 0;
}
```

Exemplo de saída para entrada `16`:

```text
Digite a idade: 16
Menor de idade.
```

O programa verifica primeiro se a idade é negativa. Se não for, testa se é 18 ou mais. Se nenhuma dessas condições for verdadeira, chega ao `else`.

## Exemplo: comparar dois números

```c
if (a > b) {
    printf("A e maior.\n");
} else if (a < b) {
    printf("B e maior.\n");
} else {
    printf("Os valores sao iguais.\n");
}
```

Esse trecho pressupõe que `a` e `b` já foram declarados e receberam valores.

## Quando utilizar

Use condicionais quando a execução depende de uma regra: validar idade, identificar se um número é positivo, selecionar uma mensagem ou verificar se uma nota atingiu uma meta.

## Erros comuns

- Escrever `if (a = b)` quando a intenção era comparar. Use `==`.
- Esquecer parênteses em torno da condição.
- Colocar `;` imediatamente depois de `if (condicao)`, criando um comando vazio.
- Não considerar limites, como exatamente 18.
- Usar condições em uma ordem que impede uma alternativa de ser alcançada.

## Boas práticas

Escreva condições que possam ser lidas em voz alta e trate valores inválidos quando fizer sentido. Não transforme uma cadeia longa de condições em algo mais complicado do que o problema exige.

## Exercícios

### Fácil
1. Leia um inteiro e informe se é positivo, negativo ou zero.
2. Leia uma idade e informe se é maior ou menor de idade.

### Intermediário
3. Leia duas notas e calcule a média; defina uma regra de aprovação e explique-a no programa.
4. Leia dois números e mostre o maior ou informe que são iguais.

## Comparação com `switch-case`

`if/else` é mais flexível para faixas e expressões como `nota >= 7`. `switch` é conveniente quando uma expressão é comparada a valores constantes específicos, como opções de menu.

## Resumo

`if` testa uma condição; `else if` testa alternativas; `else` trata o caso restante.

## Navegação do material

- **Anterior:** [6. Operadores](06-operadores.md)
- **Próxima:** [8. Laço de repetição `for`](08-estrutura-for.md)

### Links relacionados
- [6. Operadores](06-operadores.md)
- [9. Estrutura `switch-case`](09-switch-case.md)
- [8. Laço de repetição `for`](08-estrutura-for.md)
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
