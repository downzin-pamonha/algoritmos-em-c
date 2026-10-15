# 11. Boas práticas iniciais em C

## Objetivo
Escrever programas fáceis de ler, testar e manter.

## Práticas recomendadas

1. **Use nomes claros.** Prefira `quantidade` a `q` quando isso facilitar a compreensão.
2. **Indente o código.** Comandos dentro de um bloco devem aparecer recuados.
3. **Inicialize variáveis.** Não leia o conteúdo de uma variável local antes de atribuir um valor.
4. **Confira entradas.** Verifique o retorno de `scanf()` antes de usar o valor lido.
5. **Use comentários com propósito.** Explique decisões ou motivos, não repita literalmente cada linha.
6. **Compile com avisos.** `-Wall -Wextra -Wpedantic` ajuda a encontrar problemas.
7. **Teste limites.** Se uma regra diz “maior ou igual a 18”, teste 17, 18 e 19.
8. **Prefira blocos claros.** Chaves em condicionais e laços ajudam a prevenir erros.
9. **Divida o problema.** Resolva uma etapa de cada vez.
10. **Não copie sem compreender.** Explique para si mesmo o que cada linha faz.

## Exemplo: pouco claro e mais claro

Menos claro:

```c
int x=0;for(int i=1;i<=5;i++){x=x+i;}printf("%d",x);
```

Mais claro:

```c
int soma = 0;
int contador;

for (contador = 1; contador <= 5; contador++) {
    soma = soma + contador;
}

printf("Soma: %d\n", soma);
```

Os dois trechos calculam a soma de 1 a 5, supondo que estejam em uma função com as declarações necessárias. O segundo deixa os passos mais visíveis.

## Compilação com avisos

```bash
gcc -Wall -Wextra -Wpedantic programa.c -o programa
```

Avisos não substituem entender o código, mas são uma ferramenta útil para identificar possíveis problemas.

## Erros comuns de organização

- Colocar documentação, executáveis e códigos de todos os assuntos em uma única pasta.
- Usar nomes de arquivos vagos como `teste2.c` sem explicar seu propósito.
- Não atualizar os links quando um arquivo é movido.
- Marcar um assunto como dominado só porque a documentação foi escrita.

## Exercícios

1. Reescreva um código seu para melhorar os nomes e a indentação sem alterar o resultado.
2. Compile um exemplo com `-Wall -Wextra -Wpedantic` e leia cada aviso.
3. Escreva um teste para os valores imediatamente abaixo, no limite e acima de uma condição.

## Resumo

Código bom não é apenas código que funciona: também precisa ser compreensível, verificável e fácil de alterar.

## Navegação do material

- **Anterior:** [10. Laço de repetição `while`](10-estrutura-while.md)
- **Próxima:** ainda não criada. Quando um novo assunto for documentado, este link será atualizado.

### Links relacionados
- [2. Primeiro programa em C](02-primeiro-programa-c.md)
- [5. Entrada e saída com `printf()` e `scanf()`](05-entrada-e-saida.md)
- [Exercícios de fixação](../exercicios/README.md)
- [Anotações das aulas](../anotacoes/README.md)

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
