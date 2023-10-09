#include <stdio.h>

typedef struct aluno_t
{
    int num_matricula;
    char nome[31];
    float nota1;
    float nota2;
    float nota3;
}Aluno;

void cadastroAlunos(Aluno dados[5]){
    printf("Insira os dados dos alunos:\n");

    for(int i = 0; i < 5; i++){
        printf("\nInsira o nome do aluno %d: ", i+1);
        scanf("%s", dados[i].nome);
        printf("Insira o numero da matricula: ");
        scanf("%d", &dados[i].num_matricula);
        printf("Insira a nota das provas:\n");
        printf("Prova 1 > ");
        scanf("%f", &dados[i].nota1);
        printf("Prova 2 > ");
        scanf("%f", &dados[i].nota2);
        printf("Prova 3 > ");
        scanf("%f", &dados[i].nota3);
    }
}

void printAprovados(Aluno dados[5]){
    float media = 0.0;

    printf("Lista dos aprovados:\n");

    for(int i = 0; i < 5; i++){
        media = (dados[i].nota1 + dados[i].nota2 + dados[i].nota3) / 3;

        printf("Aluno %d: %s\n", i+1, dados[i].nome);

        if(media >= 6){
            printf("Aprovado!\n\n");
        }
        else{
            printf("Reprovado!\n\n");
        }
    }
}

void maiorNota(Aluno dados[5]){
    float maior = 0.0;
    int index;

    for(int i = 0; i < 5; i++){
        if(maior < dados[i].nota1);
        maior = dados[i].nota1;
        index = i;
    }

    printf("A maior nota eh do aluno %s: %.2f\n", dados[index].nome, maior);
}

void maiorMedia(Aluno dados[5]){
    float maior = 0.0, media = 0.0;
    int index;

    for(int i = 0; i < 5; i++){
        media = (dados[i].nota1 + dados[i].nota2 + dados[i].nota3) / 3;

        if(maior < media);
        maior = media;
        index = i;
    }

    printf("A maior media eh do aluno %s: %.2f\n", dados[index].nome, maior);
}

void menorMedia(Aluno dados[5]){
    float menor = 0.0, media = 0.0;
    int index;

    for(int i = 0; i < 5; i++){
        media = (dados[i].nota1 + dados[i].nota2 + dados[i].nota3) / 3;

        if(menor > media);
        menor = media;
        index = i;
    }

    printf("A menor media eh do aluno %s: %.2f\n", dados[index].nome, menor);
}

int main(){
    Aluno dados[5];

    cadastroAlunos(dados);

    printAprovados(dados);

    maiorNota(dados);

    maiorMedia(dados);

    menorMedia(dados);

    return 0;
}