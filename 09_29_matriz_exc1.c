#include <stdio.h>

void cadastroNotas(float *nptr[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            do{
                printf("Insira a nota %d do aluno %d > ", j+1, i+1);
                scanf("%f", &nota[j][i]);
                while((getchar()) != '\n');

                if(nota[j][i] > 10 || nota[j][i] < 0){
                    printf("Erro!\n");
                }
            }while((nota[j][i] > 10 || nota[j][i] < 0));
        }
    }
}

int main(){
    float nota[3][3];

    cadastroNotas(&nota);

    printf("Nota 2 aluno 1: %.1f\n", nota[1][0]);
    printf("Nota 3 aluno 2: %.1f", nota[2][1]);

    return 0;
}