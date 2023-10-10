#include <stdio.h>

typedef struct agenda_t
{
    char nome;
    int ddd;
    int numero;
}Agenda;

void cadastrarNumero(){
    
}

int main(){
    int op = 9;

    Agenda *pessoa;

    while(op != 0){
        printf("----------Agenda Telefonica----------\n");
        printf("[1] - Cadastrar\n");
        printf("[2] - Procurar\n");
        printf("[0] - Sair");
        printf("> ");
        scanf("%d", &op);
        while(getchar() != '\n');

        switch(op){
            case 0:
                printf("Fechando agenda!\n");
            break;

            case 1:
                cadastrarNumero(pessoa);
            break;

            case 2:
                procurarPessoa(pessoa);
            break;

            default:
                printf("Erro! Tente novamente!\n");
            break;
        }
    }

    return 0;
}