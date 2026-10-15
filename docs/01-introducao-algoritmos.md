# 1. Introdução a algoritmos e lógica de programação

## Objetivo
Entender o que é um algoritmo, como organizar o raciocínio e como transformar um problema em um programa.

## O que é um algoritmo?

Um **algoritmo** é uma sequência finita e organizada de passos para resolver um problema ou realizar uma tarefa. Uma receita é um exemplo cotidiano: separar os ingredientes, misturar, aquecer e servir.

**Lógica de programação** é a maneira de organizar esses passos de forma clara, consistente e executável por um computador. Um **programa** é a implementação dessas instruções em uma linguagem que o computador consegue compilar ou interpretar.

## Entrada, processamento e saída

Muitos problemas podem ser divididos em três partes:

1. **Entrada:** dados que o programa recebe.
2. **Processamento:** operações realizadas com os dados.
3. **Saída:** resultado apresentado.

Exemplo: calcular a soma de dois números.

- Entrada: `4` e `7`.
- Processamento: `4 + 7`.
- Saída: `11`.

## Primeiro raciocínio antes do código

Antes de programar, descreva os passos em linguagem comum:

1. Ler o primeiro número.
2. Ler o segundo número.
3. Somar os dois.
4. Mostrar o resultado.

Essa descrição reduz a chance de esquecer uma etapa. Depois, traduzimos cada passo para C.

## Exemplo em C

```c
#include <stdio.h>

int main(void) {
    int primeiro = 4;
    int segundo = 7;
    int soma = primeiro + segundo;

    printf("Resultado: %d\n", soma);
    return 0;
}
```

Saída esperada:

```text
Resultado: 11
```

### Entendendo o exemplo

- `#include <stdio.h>` inclui declarações da biblioteca padrão de entrada e saída, necessária para usar `printf()`.
- `int main(void)` define a função principal, ponto de entrada do programa.
- `int primeiro = 4;` cria uma variável inteira chamada `primeiro` e inicia seu valor em `4`.
- `int soma = primeiro + segundo;` calcula a soma e guarda o resultado.
- `printf()` apresenta o texto e o valor no terminal. `%d` é o marcador usado para exibir um `int`.
- `return 0;` indica ao sistema que o programa terminou normalmente.

## Quando utilizar

A divisão em entrada, processamento e saída é útil para planejar calculadoras, cadastros simples, conversões de unidades e vários outros problemas.

## Erros comuns

- Começar a escrever código sem entender o problema.
- Esquecer uma etapa do algoritmo.
- Não identificar quais dados entram e qual resultado deve sair.
- Tentar resolver tudo de uma vez. Divida o problema em passos menores.

## Exercícios de fixação

### Fácil
1. Descreva em quatro passos um algoritmo para calcular a média de duas notas.
2. Identifique entrada, processamento e saída em um programa que converte horas em minutos.

### Intermediário
3. Escreva um algoritmo em linguagem comum para descobrir qual de dois números é maior.
4. Planeje um algoritmo para calcular o preço total de três produtos.

## Resumo

Um algoritmo organiza passos para resolver um problema. Antes de codificar, identifique entrada, processamento e saída e descreva uma solução clara.

## Navegação do material

- **Anterior:** início da trilha de estudos.
- **Próxima:** [2. Primeiro programa em C](02-primeiro-programa-c.md)

### Links relacionados
- [2. Primeiro programa em C](02-primeiro-programa-c.md)
- [3. Variáveis e constantes](03-variaveis-e-constantes.md)
- [5. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)

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
