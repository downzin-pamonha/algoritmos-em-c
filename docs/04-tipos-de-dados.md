# 4. Tipos de dados

## Objetivo
Reconhecer os tipos básicos de C e escolher um tipo apropriado para cada dado.

## Por que existem tipos?

O tipo informa ao compilador que espécie de valor uma variável armazena e quais operações fazem sentido. Os tipos também influenciam a representação e a faixa de valores disponível.

## Tipos básicos comuns

| Tipo | Uso típico | Exemplo |
|---|---|---|
| `int` | números inteiros | `int idade = 18;` |
| `float` | números com parte fracionária, precisão simples | `float altura = 1.75f;` |
| `double` | números com parte fracionária, geralmente mais precisão que `float` | `double pi = 3.141592;` |
| `char` | um caractere/pequeno valor inteiro | `char inicial = 'M';` |
| `_Bool` | valor lógico `0` ou `1` | `_Bool ativo = 1;` |

Em C, `char` armazena um valor inteiro pequeno; normalmente é usado para representar um caractere. O tipo `bool` também pode ser usado com `#include <stdbool.h>` em versões de C que o suportam: `bool ativo = true;`. Esse cabeçalho fornece os nomes `bool`, `true` e `false`.

A faixa exata dos tipos inteiros depende da implementação e da plataforma. Para os primeiros exercícios, concentre-se no propósito de cada tipo.

## Especificadores de formato

Os marcadores usados em `printf()` e `scanf()` não são sempre iguais para todos os tipos.

| Tipo/uso | `printf()` | `scanf()` |
|---|---|---|
| `int` | `%d` | `%d` |
| `float` | `%f` | `%f` |
| `double` | `%f` para exibir | `%lf` para ler |
| `char` | `%c` | `%c` |

Para `printf()`, um argumento `double` é usado com `%f`. Para `scanf()`, a variável `float` normalmente usa `%f`, enquanto a variável `double` usa `%lf`. Em `scanf()`, passe o endereço da variável com `&`, por exemplo `scanf("%d", &idade);`. Há exceções a essas regras em outros tipos e formatos; consulte a documentação quando estudar tipos adicionais.

## Exemplo prático

```c
#include <stdio.h>

int main(void) {
    int idade = 18;
    float altura = 1.75f;
    double saldo = 125.50;
    char inicial = 'M';

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Saldo: %.2f\n", saldo);
    printf("Inicial: %c\n", inicial);
    return 0;
}
```

Saída esperada:

```text
Idade: 18
Altura: 1.75
Saldo: 125.50
Inicial: M
```

`%.2f` exibe duas casas decimais. Isso altera a apresentação, não transforma a variável em outro tipo.

## Erros comuns

- Colocar texto entre aspas duplas e atribuí-lo a um `char`; um caractere usa aspas simples, como `'M'`.
- Usar um especificador incompatível com o tipo, o que pode causar comportamento indefinido.
- Esperar que `float` ou `double` representem todos os decimais exatamente. Muitos valores decimais são aproximados em binário.
- Esquecer `&` ao passar uma variável comum para `scanf()`.

## Boas práticas

Escolha o tipo pelo significado do dado, não apenas pelo tamanho aparente. Confira o especificador de formato de cada função. Para dinheiro em aplicações reais, usar ponto flutuante exige cuidado com arredondamento; esse tema é complementar e não é necessário para os primeiros exercícios.

## Exercícios

1. Escolha tipos para idade, nota escolar, inicial e quantidade de livros.
2. Escreva um programa que exiba um inteiro, um `float`, um `double` e um `char`.
3. Pesquise no material da disciplina por que a faixa de `int` pode variar entre plataformas.

## Resumo

Os tipos definem como os valores são armazenados e utilizados. Em especial, confira a diferença entre os formatos de `printf()` e `scanf()` para `float` e `double`.

## Navegação do material

- **Anterior:** [3. Variáveis e constantes](03-variaveis-e-constantes.md)
- **Próxima:** [5. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)

### Links relacionados
- [3. Variáveis e constantes](03-variaveis-e-constantes.md)
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
