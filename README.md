# Algoritmos e Linguagem C

Repositório pessoal de estudos de **Algoritmos e Lógica de Programação com a linguagem C**. Aqui ficam reunidos resumos didáticos, exemplos compiláveis, exercícios e anotações das aulas.

> **Status:** em desenvolvimento contínuo. Os tópicos marcados como concluídos representam conteúdos documentados neste repositório, não necessariamente todo o conteúdo de um curso.

## Objetivos

- Entender a lógica por trás dos programas, não apenas copiar códigos.
- Consultar explicações e exemplos curtos durante a revisão.
- Praticar por meio de exercícios separados de suas soluções.
- Acrescentar novos assuntos sem precisar reorganizar o projeto.

## Conteúdos e índice

Consulte também o [índice central da documentação](docs/README.md). Cada página possui navegação para o assunto anterior, o próximo e a lista completa dos documentos existentes.

| Assunto | Documentação | Exemplos |
|---|---|---|
| Algoritmos e lógica | [Introdução a algoritmos](docs/01-introducao-algoritmos.md) | [introducao](exemplos/introducao/) |
| Primeiro programa | [Primeiro programa em C](docs/02-primeiro-programa-c.md) | [introducao](exemplos/introducao/) |
| Variáveis e constantes | [Variáveis e constantes](docs/03-variaveis-e-constantes.md) | [variaveis](exemplos/variaveis/) |
| Tipos de dados | [Tipos de dados](docs/04-tipos-de-dados.md) | [tipos-de-dados](exemplos/tipos-de-dados/) |
| Entrada e saída | [Entrada e saída](docs/05-entrada-e-saida.md) | [entrada-saida](exemplos/entrada-saida/) |
| Operadores | [Operadores](docs/06-operadores.md) | [operadores](exemplos/operadores/) |
| Condicionais | [if, else e else if](docs/07-condicionais-if-else.md) | [condicionais](exemplos/condicionais/) |
| Laço `for` | [Estrutura for](docs/08-estrutura-for.md) | [lacos-de-repeticao](exemplos/lacos-de-repeticao/) |
| `switch-case` | [Switch-case](docs/09-switch-case.md) | [switch-case](exemplos/switch-case/) |
| Laço `while` | [Estrutura while](docs/10-estrutura-while.md) | [lacos-de-repeticao](exemplos/lacos-de-repeticao/) |
| Código legível | [Boas práticas](docs/11-boas-praticas.md) | — |
| Funções | [Funções em C](docs/12-funcoes.md) *(extra para consulta futura)* | [funcoes](exemplos/funcoes/) |

### Exercícios

- [Como usar os exercícios](exercicios/README.md)
- [Exercícios para iniciantes](exercicios/iniciantes/README.md)
- [Desafios](exercicios/desafios/README.md)
- [Soluções comentadas](exercicios/solucoes/README.md) — consulte somente depois de tentar.

### Anotações pessoais

- [Como registrar uma aula](anotacoes/README.md)

## Progresso dos estudos

- [x] Conceitos iniciais de algoritmos e lógica
- [x] Estrutura de um programa em C
- [x] Variáveis e constantes
- [x] Tipos de dados
- [x] Entrada e saída com `printf()` e `scanf()`
- [x] Operadores aritméticos, relacionais e lógicos
- [x] Condicionais `if`, `else` e `else if`
- [x] Laço `for`
- [x] `switch`, `case`, `break` e `default`
- [x] Laço `while`
- [x] Boas práticas iniciais
- [ ] Funções em C (conteúdo extra para consulta futura)
- [ ] Revisar com os exemplos e exercícios
- [ ] Adicionar anotações específicas das aulas

Os itens marcados indicam que existe documentação inicial. Marque a revisão como concluída quando você tiver praticado e entendido o assunto.

## Compilar e executar com GCC

É necessário ter um compilador C, como o GCC, instalado.

### Linux ou macOS

```bash
gcc exemplos/introducao/ola_mundo.c -o ola_mundo
./ola_mundo
```

### Windows (MinGW-w64)

```powershell
gcc exemplos\introducao\ola_mundo.c -o ola_mundo.exe
.\ola_mundo.exe
```

Troque o caminho pelo arquivo `.c` que deseja executar. Se o programa usar recursos matemáticos da biblioteca `math.h`, alguns ambientes precisam da opção `-lm` ao final do comando.

## Organização das pastas

- `docs/`: explicações em Markdown, separadas dos códigos.
- `exemplos/`: pequenos programas em C organizados por tema.
- `exercicios/`: enunciados, desafios e soluções separadas.
- `anotacoes/`: espaço para observações das aulas e dúvidas.
- `LICENSE`: licença para o material original deste repositório.
- `.gitignore`: arquivos gerados localmente que não devem ser versionados.

## Como acrescentar um novo assunto

1. Crie um arquivo em `docs/` com o próximo número disponível.
2. Crie uma pasta temática em `exemplos/` e adicione arquivos `.c`.
3. Adicione exercícios em `exercicios/` e mantenha as soluções separadas.
4. Atualize o índice central (`docs/README.md`), este README e o checklist de progresso.
5. Atualize os links relacionados e a navegação **em todas as páginas existentes**, incluindo os links de anterior/próxima e a lista completa de documentos.
6. Registre dúvidas e observações pessoais em `anotacoes/`.

Tópicos como vetores, matrizes, strings, ponteiros e arquivos ficam reservados para quando forem abordados nas aulas. A página de funções foi incluída como **conteúdo extra para consulta futura**, pois pode ainda não ter sido ensinada em aula.

## Observações e aprendizados futuros

Use esta seção para registrar descobertas que merecem aparecer no README, por exemplo:
- comandos de compilação que funcionaram no seu ambiente;
- erros que você aprendeu a diagnosticar;
- assuntos que precisam de revisão;
- data da última revisão.

---

Material educacional pessoal, escrito em português brasileiro. Os exemplos são introdutórios e devem ser compilados no ambiente local para confirmar o comportamento nele.
