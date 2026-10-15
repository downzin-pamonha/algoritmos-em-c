# 3. Variáveis e constantes

## Objetivo
Aprender a guardar valores, alterar dados durante a execução e declarar valores que não devem ser modificados pelo programa.

## Variáveis

Uma **variável** é um espaço identificado pelo nome, usado para guardar um valor de determinado tipo. Em C, o tipo é declarado antes do nome.

```c
int idade;
idade = 18;
```

A primeira linha declara a variável. A segunda atribui um valor a ela. Também é possível declarar e inicializar de uma vez:

```c
int idade = 18;
```

## Constantes

Uma forma comum de indicar que um valor não deve ser alterado é usar `const`:

```c
const float PI = 3.14159f;
```

Depois de inicializada, uma variável declarada `const` não pode receber uma nova atribuição válida no código.

## Regras para nomes

- Podem conter letras, números e `_`.
- Não podem começar com número.
- Não podem conter espaços.
- Não podem ser palavras reservadas da linguagem, como `int` ou `return`.
- C diferencia maiúsculas de minúsculas: `idade` e `Idade` são identificadores diferentes.

Prefira nomes que indiquem o propósito, como `quantidadeProdutos`, em vez de `x` quando o contexto não for óbvio.

## Exemplo prático

```c
#include <stdio.h>

int main(void) {
    int idade = 18;
    const int ANO_ATUAL = 2026;

    idade = idade + 1;

    printf("Idade: %d\n", idade);
    printf("Ano de referencia: %d\n", ANO_ATUAL);
    return 0;
}
```

Saída:

```text
Idade: 19
Ano de referencia: 2026
```

`idade = idade + 1` lê o valor atual, soma um e guarda o resultado novamente em `idade`. A constante `ANO_ATUAL` não é modificada.

## Quando utilizar

Use variáveis para dados que podem mudar, como pontuação ou quantidade de itens. Use `const` para valores que devem permanecer fixos durante o trecho de código, como uma taxa definida para um cálculo.

## Erros comuns

- Usar uma variável local sem inicializá-la antes de ler seu valor.
- Tentar mudar uma constante.
- Usar espaços no nome, como `minha idade`.
- Confundir `=` (atribuição) com `==` (comparação).

## Boas práticas

Inicialize variáveis quando isso fizer sentido e escolha nomes descritivos. Não declare todas as variáveis com o mesmo nome genérico. Uma constante não torna automaticamente o valor universalmente correto: confira se o valor representa o que o problema pede.

## Exercícios

### Fácil
1. Declare variáveis para guardar idade, inicial do nome e altura.
2. Declare uma constante para representar o número de meses em um ano.

### Intermediário
3. Guarde o preço de um produto e a quantidade comprada; calcule o total.
4. Explique por que uma variável de pontuação é diferente de uma constante que representa o número de meses do ano.

## Resumo

Variáveis guardam valores que podem mudar. `const` expressa que um valor não deve ser reatribuído. Nomes claros tornam o código mais fácil de entender.

## Navegação do material

- **Anterior:** [2. Primeiro programa em C](02-primeiro-programa-c.md)
- **Próxima:** [4. Tipos de dados](04-tipos-de-dados.md)

### Links relacionados
- [4. Tipos de dados](04-tipos-de-dados.md)
- [5. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)
- [6. Operadores](06-operadores.md)

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
