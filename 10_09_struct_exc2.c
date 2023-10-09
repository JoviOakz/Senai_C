#include <stdio.h>

typedef struct aluno_t
{
    char nome[31];
    int num_matricula;
    char curso[21];
}Aluno;

int main(){
    Aluno dados[5];

    printf("Insira os dados dos alunos:\n");

    for(int i = 0; i < 5; i++){
        printf("\nInsira o nome do aluno %d: ", i+1);
        scanf("%s", dados[i].nome);
        printf("Insira o numero da matricula: ");
        scanf("%d", &dados[i].num_matricula);
        printf("Insira o curso: ");
        scanf("%s", dados[i].curso);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("Aluno %d\n", i+1);
        printf("Nome: %s\n", dados[i].nome);
        printf("Numero de matricula: %d\n", dados[i].num_matricula);
        printf("Curso: %s\n\n", dados[i].curso);
    }

    return 0;
}