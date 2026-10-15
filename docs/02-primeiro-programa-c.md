# 2. Primeiro programa em C

## Objetivo
Conhecer a estrutura mínima de um programa em C e entender como compilar e executar um arquivo `.c`.

## O que é C?

C é uma linguagem de programação compilada. Em um fluxo comum, o compilador traduz o código-fonte para um programa executável que o sistema consegue executar.

## Estrutura básica

```c
#include <stdio.h>

int main(void) {
    printf("Ola, mundo!\n");
    return 0;
}
```

Saída esperada:

```text
Ola, mundo!
```

## Explicação linha por linha

- `#include <stdio.h>`: disponibiliza declarações da biblioteca padrão de entrada e saída. O `printf()` é declarado nela.
- `int main(void)`: declara a função principal. `int` indica que ela retorna um número inteiro; `void` indica que não recebe argumentos.
- `{` e `}`: delimitam o bloco de comandos da função.
- `printf("Ola, mundo!\n");`: escreve o texto. `\n` representa uma quebra de linha.
- `return 0;`: encerra a função principal indicando sucesso.
- `;`: termina uma instrução em C.

## Compilar e executar

Salve o código em `ola_mundo.c`. Com GCC, no terminal, execute:

```bash
gcc ola_mundo.c -o ola_mundo
```

No Linux/macOS:

```bash
./ola_mundo
```

No Windows com MinGW-w64:

```powershell
.\ola_mundo.exe
```

O comando `-o` define o nome do executável gerado. O comando de execução varia conforme o sistema operacional.

## Exemplo com variável

```c
#include <stdio.h>

int main(void) {
    int idade = 18;
    printf("Minha idade e %d anos.\n", idade);
    return 0;
}
```

Saída:

```text
Minha idade e 18 anos.
```

`idade` é uma variável inteira. O `%d` indica a posição em que o valor de `idade` será exibido. O texto usa `e` sem acento para evitar problemas de codificação em terminais configurados de formas diferentes; C também pode imprimir caracteres acentuados quando a codificação está adequada.

## Quando utilizar

Todo programa C executável precisa de uma função `main`. A biblioteca `stdio.h` é útil quando o programa precisa ler dados ou exibir resultados no terminal.

## Erros comuns

- Esquecer `;` ao final de uma instrução.
- Esquecer chaves ou fechar o bloco incorretamente.
- Escrever `Printf` em vez de `printf`: C diferencia letras maiúsculas e minúsculas.
- Tentar executar o arquivo `.c` diretamente sem compilá-lo.
- Usar `%d` para um valor que não é do tipo `int`.

## Boas práticas

Use nomes claros, indente os comandos dentro das chaves e compile com avisos ativados durante os estudos:

```bash
gcc -Wall -Wextra -Wpedantic ola_mundo.c -o ola_mundo
```

## Exercícios

1. Altere o programa para imprimir seu nome ou um apelido.
2. Imprima três linhas diferentes.
3. Crie uma variável `int` e mostre seu valor usando `%d`.

## Resumo

`main()` é o ponto de entrada, `printf()` mostra informações, `stdio.h` declara funções de entrada e saída e `return 0` indica término normal.

## Navegação do material

- **Anterior:** [1. Introdução a algoritmos e lógica de programação](01-introducao-algoritmos.md)
- **Próxima:** [3. Variáveis e constantes](03-variaveis-e-constantes.md)

### Links relacionados
- [1. Introdução a algoritmos e lógica de programação](01-introducao-algoritmos.md)
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
