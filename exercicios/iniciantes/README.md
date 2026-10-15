# Exercícios para iniciantes

## 1. Apresentação
**Tema:** saída de dados  
Mostre três linhas no terminal: uma saudação, o nome de um projeto e uma mensagem final.

**Critério:** o programa compila e mostra as três linhas na ordem desejada.

## 2. Soma de dois números
**Tema:** variáveis, entrada e saída  
Leia dois números inteiros e mostre a soma.

**Entrada de exemplo:**
```text
4 7
```
**Saída esperada:**
```text
Soma: 11
```
**Dica:** declare duas variáveis `int` e confira se `scanf()` conseguiu ler dois valores.

## 3. Conversão de horas
**Tema:** entrada, processamento e saída  
Leia uma quantidade inteira de horas e converta para minutos.

**Exemplo:** entrada `2`; saída `120 minutos`.

**Dica:** uma hora tem 60 minutos.

## 4. Positivo, negativo ou zero
**Tema:** `if`, `else if`, `else`  
Leia um inteiro e informe se é positivo, negativo ou zero.

**Teste mínimo:** experimente `-3`, `0` e `8`.

## 5. Par ou ímpar
**Tema:** operador `%` e condicional  
Leia um inteiro e use o resto da divisão por 2 para determinar se é par ou ímpar.

**Dica:** quando `numero % 2` é zero, o número é par.

## 6. Maior de dois números
**Tema:** comparações e condicionais  
Leia dois inteiros e mostre o maior. Se forem iguais, informe isso.

**Teste mínimo:** primeiro maior, segundo maior e valores iguais.

## 7. Contagem com `for`
**Tema:** repetição  
Imprima os números de 1 a 10, um por linha.

**Critério:** a contagem começa em 1 e inclui 10.

## 8. Soma de 1 até N
**Tema:** `for` ou `while`  
Leia um inteiro positivo `N` e calcule `1 + 2 + ... + N`.

**Exemplo:** entrada `5`; saída `15`.

**Dica:** comece o acumulador em zero e some cada contador. Defina como tratar entradas não positivas.

## 9. Menu com `switch`
**Tema:** seleção  
Apresente um menu com três opções. Mostre uma mensagem diferente para cada opção e trate valores desconhecidos.

**Critério:** cada `case` deve evitar cair acidentalmente no seguinte.

## 10. Média de duas notas
**Tema:** tipos numéricos e condicionais  
Leia duas notas, calcule a média e mostre o resultado com duas casas decimais. Defina e documente uma regra de aprovação, conforme a orientação da aula.

**Dica:** cuidado com divisão inteira; use valores `float` ou `double` se precisar de parte decimal.

## Checklist de revisão

- [ ] Identifiquei entrada, processamento e saída.
- [ ] Escolhi tipos adequados.
- [ ] Usei os formatos corretos em `printf()` e `scanf()`.
- [ ] Testei valores de limite.
- [ ] Consigo explicar cada linha do código.
