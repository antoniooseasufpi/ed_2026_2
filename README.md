# Estruturas de Dados I — 2026.2

Este repositório reúne as questões, os exemplos e os materiais desenvolvidos durante a disciplina de **Estruturas de Dados I (ED I)**, do curso de Bacharelado em Sistemas de Informação da Universidade Federal do Piauí (UFPI), Campus Senador Helvídio Nunes de Barros.

O conteúdo será atualizado ao longo do semestre. Após de cada aula ou atividade, sincronize sua cópia local para ter acesso à versão mais recente dos arquivos.

## Organização do repositório

Os materiais são separados por aula:

```text
ed_2026_2/
├── aula 1/
│   ├── exemplo_1.c
│   └── exemplo_2.c
├── plano de curso/
│   └── plano_de_curso_ED_-_I_assinado (4).pdf
└── README.md
```

Novas pastas e arquivos serão acrescentados conforme o andamento da disciplina.

## Plano da disciplina

O [plano de ensino](plano%20de%20curso/plano_de_curso_ED_-_I_assinado%20%284%29.pdf) apresenta a ementa, os objetivos, o conteúdo programático, a avaliação e a bibliografia da disciplina.

- **Professor:** Antonio Oseas de Carvalho Filho
- **Carga horária:** 60 horas
- **Créditos:** 2.2.0
- **Bloco:** III

Os principais conteúdos previstos são:

| Conteúdo | Carga horária |
|---|---:|
| Apresentação da disciplina | 2 h |
| Alocação dinâmica | 6 h |
| Recursividade | 6 h |
| Tipos abstratos de dados | 6 h |
| Listas lineares estáticas e dinâmicas | 16 h |
| Métodos de busca | 4 h |
| Algoritmos de ordenação | 12 h |
| Introdução a árvores | 8 h |

Consulte sempre o plano de ensino e as orientações fornecidas pelo professor para obter as regras acadêmicas completas e atualizadas.
Obs: a carga horária de cada conteúdo pode variar conforme o andamento da disciplina.

## Preparação do ambiente

Para acompanhar os exemplos, você precisará de:

- [Git](https://git-scm.com/downloads), para baixar e atualizar o repositório;
- um compilador C, como o [GCC](https://gcc.gnu.org/);
- um editor de código de sua preferência.

Confirme a instalação no terminal:

```bash
git --version
gcc --version
```

## Como baixar o repositório

No terminal, execute:

```bash
git clone https://github.com/antoniooseasufpi/ed_2026_2.git
cd ed_2026_2
```

O clone precisa ser feito apenas uma vez.

## Como obter as atualizações

Entre na pasta do repositório e execute:

```bash
git pull origin main
```

Se você alterou algum arquivo e o Git impedir a atualização, preserve suas mudanças antes de continuar. Uma opção simples é copiar sua solução para outro local e, depois, restaurá-la em um arquivo próprio.

## Como compilar e executar os exemplos

Os exemplos são escritos em C. Use aspas nos caminhos porque os nomes das pastas contêm espaços.

### Linux e macOS

```bash
gcc "aula 1/exemplo_1.c" -o exemplo_1
./exemplo_1 argumento1 argumento2
```

```bash
gcc "aula 1/exemplo_2.c" -o exemplo_2
./exemplo_2 7.5 8.0 9.0 6.5
```

### Windows

No PowerShell ou Prompt de Comando, compile com o GCC instalado pelo MinGW:

```powershell
gcc "aula 1/exemplo_1.c" -o exemplo_1.exe
.\exemplo_1.exe argumento1 argumento2
```

```powershell
gcc "aula 1/exemplo_2.c" -o exemplo_2.exe
.\exemplo_2.exe 7.5 8.0 9.0 6.5
```

## Como resolver as questões

Para não perder sua solução quando o repositório for atualizado:

1. Não edite diretamente o arquivo original da questão ou do exemplo.
2. Crie uma cópia com um nome que identifique sua solução, de preferência em uma pasta pessoal fora deste repositório.
3. Compile o programa e corrija os erros apresentados.
4. Teste entradas comuns e também casos-limite antes de considerar a solução concluída.

Exemplo:

```bash
cp "aula 1/exemplo_2.c" minha_solucao.c
gcc minha_solucao.c -o minha_solucao
./minha_solucao 7.5 8.0 9.0 6.5
```

## Problemas comuns

- **`gcc: command not found`**: o compilador ainda não está instalado ou não foi adicionado ao `PATH`.
- **`No such file or directory`**: confira o nome e use aspas em caminhos que possuem espaços.
- **`Permission denied` ao executar**: no Linux ou macOS, confirme que o comando começa com `./`.
- **Erro durante o `git pull`**: verifique se você modificou arquivos versionados e guarde suas alterações antes de atualizar.

## Boas práticas

- Leia todo o enunciado antes de começar.
- Use nomes claros para variáveis e funções.
- Divida o problema em funções menores sempre que fizer sentido.
- Indente o código de forma consistente.
- Não compartilhe apenas a resposta: discuta também a estratégia usada para chegar até ela.

Em caso de dúvida sobre uma questão, leve o código, a mensagem de erro e os testes já realizados. Essas informações tornam a análise do problema muito mais rápida.
