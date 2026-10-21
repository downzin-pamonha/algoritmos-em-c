# 12. Funções em C

> **Classificação:** conteúdo extra para consulta futura. Use esta página como introdução caso o assunto ainda não tenha sido explicado em aula.

## Objetivo

Aprender o que são funções, como declará-las, chamá-las, receber parâmetros e retornar resultados, além de entender por que elas ajudam a organizar programas.

## O que é uma função?

Uma **função** é um bloco de código que recebe um nome e pode ser executado quando o programa precisa realizar uma tarefa. Em vez de escrever os mesmos comandos várias vezes, podemos reuni-los em uma função e chamá-la sempre que necessário.

Por exemplo, um programa pode ter uma função para somar dois números, outra para mostrar um menu e outra para calcular uma média.

A função `main()` também é uma função: é nela que a execução de um programa C comum começa.

## Estrutura básica

```c
tipo_de_retorno nome_da_funcao(parametros) {
    // comandos da função
    return valor;
}
```

- **Tipo de retorno:** indica o tipo do resultado que a função devolve, como `int`, `float` ou `char`. Use `void` quando ela não devolve um valor.
- **Nome:** identificador usado para chamar a função.
- **Parâmetros:** dados recebidos pela função. Uma função pode não receber nenhum.
- **`return`:** encerra a execução da função e, quando aplicável, devolve um resultado.

## Primeiro exemplo: uma função sem retorno

```c
#include <stdio.h>

void mostrarMensagem(void) {
    printf("Ola! Estou aprendendo funcoes em C.\n");
}

int main(void) {
    mostrarMensagem();
    return 0;
}
```

### Explicação linha por linha

1. `#include <stdio.h>` permite usar `printf()`.
2. `void mostrarMensagem(void)` define uma função chamada `mostrarMensagem` que não recebe parâmetros e não retorna um valor.
3. As chaves delimitam os comandos executados quando a função é chamada.
4. `mostrarMensagem();` chama a função dentro de `main()`.
5. `return 0;` indica que o programa terminou normalmente.

**Saída esperada:**

```text
Ola! Estou aprendendo funcoes em C.
```

## Função com parâmetros

Os parâmetros permitem que a função trabalhe com valores fornecidos na chamada.

```c
#include <stdio.h>

void mostrarDobro(int numero) {
    printf("Dobro: %d\n", numero * 2);
}

int main(void) {
    mostrarDobro(5);
    mostrarDobro(12);
    return 0;
}
```

**Saída esperada:**

```text
Dobro: 10
Dobro: 24
```

Nesse exemplo, `numero` é o parâmetro. Os valores `5` e `12` são argumentos passados nas chamadas. A função executa a mesma tarefa com valores diferentes.

## Função que retorna um valor

Quando precisamos usar o resultado em outra parte do programa, podemos retornar um valor.

```c
#include <stdio.h>

int somar(int a, int b) {
    return a + b;
}

int main(void) {
    int resultado;

    resultado = somar(7, 3);
    printf("Soma: %d\n", resultado);

    return 0;
}
```

**Saída esperada:**

```text
Soma: 10
```

- `int somar(int a, int b)` declara que a função recebe dois inteiros e retorna um inteiro.
- `return a + b;` devolve a soma para o local da chamada.
- `resultado = somar(7, 3);` guarda o valor retornado na variável `resultado`.

## Declaração (protótipo) e definição

Em C, se a função for definida depois de `main()`, normalmente devemos informar seu protótipo antes de ela ser usada. O protótipo informa ao compilador o nome, o tipo de retorno e os parâmetros.

```c
#include <stdio.h>

int multiplicar(int a, int b); /* prototipo */

int main(void) {
    printf("Resultado: %d\n", multiplicar(4, 6));
    return 0;
}

int multiplicar(int a, int b) { /* definicao */
    return a * b;
}
```

O protótipo termina com ponto e vírgula. A definição contém o corpo da função entre chaves. Os tipos e a quantidade de parâmetros devem corresponder.

## Quando utilizar funções?

- Quando um trecho de código precisa ser reutilizado.
- Quando uma tarefa pode receber dados e produzir um resultado bem definido.
- Para separar um problema grande em partes menores.
- Para tornar `main()` mais curta e o programa mais fácil de testar e manter.

## Erros comuns

1. **Esquecer o tipo de retorno:** declare explicitamente, por exemplo, `int calcular(void)` ou `void exibir(void)`.
2. **Retornar um tipo incompatível:** uma função declarada como `int` deve retornar um resultado inteiro adequado.
3. **Esquecer o protótipo:** se a definição aparecer depois da chamada, declare a função antes de usá-la.
4. **Passar argumentos incorretos:** confira quantidade, ordem e tipos dos argumentos.
5. **Escrever `return` numa função `void` como se devolvesse um valor:** funções `void` não retornam um resultado.
6. **Confundir parâmetro e argumento:** parâmetro é a variável declarada na função; argumento é o valor fornecido na chamada.
7. **Esquecer o ponto e vírgula na chamada:** dentro de uma instrução, use `somar(2, 3);`.

## Boas práticas

- Dê nomes que descrevam a tarefa, como `calcularMedia` ou `mostrarMenu`.
- Prefira funções pequenas, com uma responsabilidade clara.
- Use parâmetros para fornecer os dados necessários, em vez de depender de variáveis globais.
- Retorne um resultado quando ele precisar ser utilizado por quem chamou a função.
- Documente regras menos óbvias e teste diferentes entradas.
- Compile com avisos habilitados: `gcc -std=c11 -Wall -Wextra -Wpedantic arquivo.c -o programa`.

## Exercícios de fixação

### Fácil

1. Crie uma função `mostrarBoasVindas` que não receba parâmetros e mostre uma saudação.
2. Crie uma função `mostrarQuadrado` que receba um inteiro e imprima seu quadrado.

### Intermediário

3. Crie uma função `int subtrair(int a, int b)` que retorne a diferença entre dois inteiros.
4. Crie uma função `float calcularMedia(float nota1, float nota2)` que retorne a média de duas notas. Mostre o resultado em `main()` com duas casas decimais.

### Desafio

5. Faça um programa com funções separadas para ler dois números, calcular a soma e exibir o resultado. Pense em quais funções precisam retornar valores e quais apenas mostram mensagens.

## Resumo

Funções permitem nomear e reutilizar tarefas. Elas podem receber parâmetros, executar comandos e retornar resultados. Em C, devemos declarar os tipos de retorno e dos parâmetros corretamente; protótipos ajudam quando a definição aparece depois da chamada.

## Navegação do material

- **Anterior:** [11. Boas práticas iniciais em C](11-boas-praticas.md)
- **Próxima:** ainda não criada. Quando um novo assunto for documentado, este link será atualizado.

### Links relacionados
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
- [Exemplos de funções em C](../exemplos/funcoes/)
- [Exercícios](../exercicios/README.md)
- [Anotações das aulas](../anotacoes/README.md)

### Todos os documentos
- [01. Introdução a algoritmos e lógica de programação](01-introducao-algoritmos.md)
- [02. Primeiro programa em C](02-primeiro-programa-c.md)
- [03. Variáveis e constantes](03-variaveis-e-constantes.md)
- [04. Tipos de dados](04-tipos-de-dados.md)
- [05. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)
- [06. Operadores](06-operadores.md)
- [07. Condicionais `if`, `else` e `else if`](07-condicionais-if-else.md)
- [08. Laço de repetição `for`](08-estrutura-for.md)
- [09. Estrutura `switch-case`](09-switch-case.md)
- [10. Laço de repetição `while`](10-estrutura-while.md)
- [11. Boas práticas iniciais em C](11-boas-praticas.md)
- [12. Funções em C](12-funcoes.md)

- [Índice central da documentação](README.md)
- [README principal do repositório](../README.md)
