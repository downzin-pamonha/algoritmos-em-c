# 6. Operadores

## Objetivo
Realizar cálculos e comparar valores para produzir resultados e condições.

## Operadores aritméticos

| Operador | Significado | Exemplo |
|---|---|---|
| `+` | adição | `a + b` |
| `-` | subtração | `a - b` |
| `*` | multiplicação | `a * b` |
| `/` | divisão | `a / b` |
| `%` | resto da divisão inteira | `a % b` |

Quando ambos os operandos de `/` são inteiros, a divisão descarta a parte fracionária. Por exemplo, `7 / 2` resulta em `3`; `7.0 / 2` resulta em `3.5`.

## Operadores relacionais

Eles comparam valores e produzem verdadeiro (1) ou falso (0) em expressões C:

- `==`: igual a
- `!=`: diferente de
- `>`: maior que
- `<`: menor que
- `>=`: maior ou igual a
- `<=`: menor ou igual a

Atenção: `=` atribui um valor; `==` compara dois valores.

## Operadores lógicos

- `&&`: E lógico; verdadeiro quando as duas condições são verdadeiras.
- `||`: OU lógico; verdadeiro quando pelo menos uma condição é verdadeira.
- `!`: NÃO lógico; inverte o resultado lógico.

C usa avaliação de curto-circuito para `&&` e `||`: em algumas situações, a segunda parte nem precisa ser avaliada.

## Exemplo

```c
#include <stdio.h>

int main(void) {
    int idade = 20;
    int tem_ingresso = 1;

    printf("Soma: %d\n", 7 + 3);
    printf("Resto: %d\n", 7 % 2);
    printf("Maior de idade: %d\n", idade >= 18);
    printf("Pode entrar: %d\n", idade >= 18 && tem_ingresso == 1);
    return 0;
}
```

Saída:

```text
Soma: 10
Resto: 1
Maior de idade: 1
Pode entrar: 1
```

Em C, uma expressão lógica verdadeira normalmente é representada por `1`, e falsa por `0`.

## Precedência

Operadores têm regras de precedência, que determinam a ordem de avaliação. Use parênteses para deixar a intenção explícita:

```c
int resultado = (2 + 3) * 4; /* resultado vale 20 */
```

## Erros comuns

- Usar `=` em uma condição quando a intenção era comparar com `==`.
- Esperar resultado decimal de uma divisão entre inteiros.
- Dividir por zero.
- Omitir parênteses em uma expressão difícil de ler.
- Confundir `&&` (ambas) com `||` (pelo menos uma).

## Exercícios

1. Leia dois inteiros e exiba soma, subtração e multiplicação.
2. Leia um inteiro e informe o resto da divisão por 2.
3. Leia idade e pergunte se é maior ou igual a 18.
4. Leia um número e verifique se está entre 10 e 20, inclusive, usando `&&`.

## Resumo

Operadores aritméticos calculam; relacionais comparam; lógicos combinam condições. Parênteses ajudam a comunicar a ordem desejada.

## Navegação do material

- **Anterior:** [5. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)
- **Próxima:** [7. Condicionais `if`, `else` e `else if`](07-condicionais-if-else.md)

### Links relacionados
- [4. Tipos de dados](04-tipos-de-dados.md)
- [5. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)
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
