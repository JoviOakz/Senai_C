#include <stdio.h>

void tentativAluno(char resposta[5][10]){
    for(int i = 0; i < 5; i++){
        printf("Aluno %d) Insira as respostas:\n", i+1);

        for(int j = 0; j < 10; j++){
            printf("Exercicio %d > ", j+1);
            scanf(" %c", &resposta[i][j]);
            while((getchar()) != '\n');
        }

        printf("\n");
    }
}

void resultProva(char resposta[5][10], char gabarito[10], int notas[5]){
    for(int i = 0; i < 5; i++){
        notas[i] = 0;

        for(int j = 0; j < 10; j++){
            if(resposta[i][j] == gabarito[j]){
                notas[i]++;
            }
        }
    }
}

void mostrarResultado(int notas[5]){
    for(int i = 0; i < 5; i++){
        printf("Nota do aluno %d: %d\n", i+1, notas[i]);
    }
}

int main(){
    char resposta[5][10], gabarito[10] = {'a', 'b', 'c', 'c', 'd', 'a', 'd', 'b', 'a', 'c'};
    int notas[5];

    tentativAluno(resposta);

    resultProva(resposta, gabarito, notas);

    mostrarResultado(notas);

    return 0;
}