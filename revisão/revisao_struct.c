#include <stdio.h>
#include <stdlib.h>

#define MAX_CAPACIDADE_ALUNOS 50
#define MAX_CAPACIDADE_COLEGIO 10

typedef struct sala Sala;
typedef struct aluno Aluno;
typedef struct colegio Colegio;

struct aluno
{
    char nome[50];
    int mat, idade;
};

struct sala{
    int periodo, capacidade;
    char nome[50];
    Aluno alunos[MAX_CAPACIDADE_ALUNOS];
};

struct colegio
{
    char nome[100];
    int capacidade;
    Sala salas[MAX_CAPACIDADE_COLEGIO];
};


void mostrar_sala(Sala sala) {
    printf("Nome da turma: %s\n", sala.nome);
    printf("Periodo: %d\n", sala.periodo);
    printf("Capacidade: %d\n", sala.capacidade);
    for (int i = 0; i < sala.capacidade; i++)
    {
        //prints usando o vetor alunos como ponteiro
        printf("Nome do aluno %d: %s\n", i+1, (sala.alunos + i)->nome);
        printf("Matricula do aluno %d: %d\n", i+1, (sala.alunos + i)->mat);
        printf("Idade do aluno %d: %d\n", i+1, (sala.alunos + i)->idade);
    }
}

Sala preencher_sala() {
    Sala sala;
    printf("Informe o nome da sala: ");
    scanf("%s", sala.nome);
    printf("Informe o periodo da sala: ");
    scanf("%d", &sala.periodo);
    do{
        printf("Informe a capacidade da sala: ");
        scanf("%d", &sala.capacidade);
    }while (sala.capacidade < 1 || sala.capacidade > MAX_CAPACIDADE_ALUNOS);

    for (int i = 0; i < sala.capacidade; i++)
    {
        printf("Informe o nome do aluno %d ",i+1);
        scanf(" %s", (sala.alunos + i)->nome);
        printf("Informe a matricula do aluno %d ",i+1);
        scanf("%d", &(sala.alunos + i)->mat);
        printf("Informe a idade do aluno %d ",i+1);
        scanf("%d", &(sala.alunos + i)->idade);
    }
    return sala;
}

int main()
{
    Colegio col;
    printf("Informe o nome do colegio");
    scanf(" %s", col.nome);
    do{
        printf("Informe quantas salas de aula haverao");
        scanf("%d", &col.capacidade);
    }while(col.capacidade < 1 || col.capacidade > MAX_CAPACIDADE_COLEGIO);

    // for para alimentar as salas
    for (int i = 0; i < col.capacidade; i++)
        col.salas[i] = preencher_sala();
    
    printf("Colegio: %s\n", col.nome);
    for (int i = 0; i < col.capacidade; i++)
        mostrar_sala(col.salas[i]);

    return 0;
}
