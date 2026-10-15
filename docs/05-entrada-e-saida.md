# 5. Entrada e saída com `printf()` e `scanf()`

## Objetivo
Exibir mensagens e resultados no terminal e ler dados digitados por quem usa o programa.

## Saída com `printf()`

`printf()` apresenta texto e valores. Os especificadores, como `%d` e `%f`, indicam o formato de cada valor.

```c
printf("Tenho %d anos.\n", idade);
```

O `%d` é substituído pelo valor de `idade`. `\n` pula para a próxima linha.

## Entrada com `scanf()`

`scanf()` tenta ler dados de acordo com o formato informado. Para variáveis comuns, passe o endereço com `&`:

```c
int idade;
scanf("%d", &idade);
```

O operador `&` fornece o endereço onde `scanf()` deve guardar o valor. Verifique o retorno de `scanf()` para saber se a leitura funcionou.

## Exemplo completo

```c
#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: ");
    if (scanf("%d", &idade) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Voce informou %d anos.\n", idade);
    return 0;
}
```

Exemplo de execução:

```text
Digite sua idade: 20
Voce informou 20 anos.
```

A entrada `20` é lida, armazenada em `idade` e depois exibida. Se o usuário digitar texto em vez de um inteiro, a leitura pode falhar e o programa informa o erro.

## Lendo tipos diferentes

```c
int quantidade;
float nota;
double distancia;
char inicial;

scanf("%d", &quantidade);
scanf("%f", &nota);
scanf("%lf", &distancia);
scanf(" %c", &inicial);
```

O espaço antes de `%c` faz `scanf()` ignorar espaços em branco anteriores, como a quebra de linha que ficou na entrada. Isso é útil quando uma leitura de caractere vem depois de outra leitura.

## Erros comuns

- Esquecer `&` em `scanf("%d", &idade)`.
- Usar `%f` para ler uma variável `double` com `scanf()`; para `double`, use `%lf`.
- Não conferir se a leitura deu certo.
- Usar `%c` sem considerar uma quebra de linha pendente.
- Tentar ler uma frase com espaços usando `%s`: `%s` para no primeiro espaço. A leitura de linhas completas exige outra abordagem, como `fgets()`, a ser estudada com cuidado.

## Boas práticas

Mostre mensagens claras antes de pedir dados e valide o retorno de `scanf()`. Não confunda a mensagem exibida com o dado lido. Para programas maiores, a leitura de linhas com `fgets()` pode ser mais controlável.

## Exercícios

1. Peça o nome (uma palavra), a idade e mostre uma frase com a idade.
2. Leia dois inteiros e mostre a soma.
3. Leia uma nota decimal e exiba-a com duas casas.
4. Faça o programa exibir uma mensagem de erro se a entrada esperada for inválida.

## Resumo

`printf()` exibe informações e `scanf()` lê valores formatados. Use o especificador correto, passe o endereço com `&` e verifique se a leitura foi bem-sucedida.

## Navegação do material

- **Anterior:** [4. Tipos de dados](04-tipos-de-dados.md)
- **Próxima:** [6. Operadores](06-operadores.md)

### Links relacionados
- [3. Variáveis e constantes](03-variaveis-e-constantes.md)
- [4. Tipos de dados](04-tipos-de-dados.md)
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
