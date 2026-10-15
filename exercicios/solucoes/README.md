# Soluções comentadas

Consulte esta pasta depois de tentar os exercícios. Uma solução é um exemplo de raciocínio; comparar abordagens pode ajudar, mas tente explicar o código com suas próprias palavras.

## Soma de dois números

Arquivo de referência: [`ler-dois-numeros.c`](../../exemplos/entrada-saida/ler-dois-numeros.c).

A solução declara dois inteiros, tenta ler ambos, verifica se a leitura teve sucesso e só então calcula `a + b`. Essa verificação evita usar os valores como se a entrada tivesse sido válida quando não foi.

## Positivo, negativo ou zero

Arquivo de referência: [`classificar-numero.c`](../../exemplos/condicionais/classificar-numero.c).

A primeira condição testa `numero > 0`; a segunda testa `numero < 0`. Se nenhuma for verdadeira, o valor só pode ser zero. A ordem cobre os três casos sem sobreposição.

## Contagem de 1 a 10

Arquivo de referência: [`contar-for.c`](../../exemplos/lacos-de-repeticao/contar-for.c).

O contador começa em 1, o laço continua enquanto `contador <= 10`, e `contador++` avança uma unidade após cada impressão. O limite usa `<=` para incluir o 10.

## Menu

Arquivo de referência: [`menu-simples.c`](../../exemplos/switch-case/menu-simples.c).

Cada `case` representa uma opção. O `break` evita que, depois de executar uma opção, o programa continue pelo próximo caso. `default` cobre valores que não correspondem às opções previstas.

Para outros exercícios, use os exemplos da pasta `exemplos/` como referência e tente construir a solução em etapas.
