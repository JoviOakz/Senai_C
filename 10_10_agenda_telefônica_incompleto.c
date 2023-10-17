#include <stdio.h>
#include <string.h>

typedef struct agenda_t
{
    char nome[70];
    char ddd[10];
    char numero[20];
}Agenda;

void cadastrarContato(Agenda pessoa, FILE *lista){
    printf("Insira o nome: ");
    scanf(" %s", pessoa.nome);
    while(getchar() != '\n');

    printf("DDD: ");
    scanf(" %s", pessoa.ddd);
    while(getchar() != '\n');

    printf("Numero: ");
    scanf(" %s", pessoa.numero);
    while(getchar() != '\n');

    printf("\n");

    lista = fopen("lista_telefonica.txt", "a");

    fprintf(lista, "Contato: %s (%s) %s\n\n", pessoa.nome, pessoa.ddd, pessoa.numero);

    fclose(lista);
}

void procurarContato(Agenda pessoa, FILE *lista){
    char check_nome[70];
    int aux = 0;

    printf("Insira o nome a ser buscado: ");
    scanf(" %s", check_nome);
    while(getchar() != '\n');

    lista = fopen("lista_telefonica.txt", "r");

    while(fscanf(lista, "%s %s %s", pessoa.nome, pessoa.ddd, pessoa.numero) != EOF){
        if(strcmp(pessoa.nome, check_nome) == 0){
            printf("|| Contato encontrado ||\n");
            printf("Nome: %s\n", pessoa.nome);
            printf("Telefone: (%s) %s\n\n", pessoa.ddd, pessoa.numero);

            aux = 1;
        }
    }

    if(aux == 0){
        printf("Contato nao encontrado!\n\n");
    }

    fclose(lista);
}

int main(){
    int op = 9;

    Agenda pessoa;

    FILE * lista;

    while(op != 0){
        printf("----------Agenda Telefonica----------\n");
        printf("[1] - Cadastrar contato\n");
        printf("[2] - Procurar contato\n");
        printf("[0] - Sair\n");
        printf("> ");
        scanf("%d", &op);
        while(getchar() != '\n');

        switch(op){
            case 0:
                printf("Fechando agenda!\n");
            break;

            case 1:
                cadastrarContato(pessoa, lista);
            break;

            case 2:
                procurarContato(pessoa, lista);
            break;

            default:
                printf("Erro! Tente novamente!\n\n");
            break;
        }
    }

    return 0;
}