#include <stdio.h>
#include <string.h>

typedef struct agenda_t
{
    char nome[70];
    char ddd[10];
    char numero[20];
}Agenda;

void cadastrarContato(Agenda *pessoa, int index, FILE *lista){
    printf("Insira o nome: ");
    scanf("%s", pessoa[index].nome);
    while(getchar() != '\n');

    printf("DDD: ");
    scanf("%s", pessoa[index].ddd);
    while(getchar() != '\n');

    printf("Numero: ");
    scanf("%s", pessoa[index].numero);
    while(getchar() != '\n');

    lista = fopen("lista_telefonica.txt", "a");

    fprintf(lista, "Nome: %s\nNumero: (%s) %s\n", pessoa[index].nome, pessoa[index].ddd, pessoa[index].numero);

    fclose(lista);

    index++;
}

void procurarContato(Agenda *pessoa, FILE *lista){
    char check_nome[70];
    char check_ddd[10];
    char check_numero[20];

    printf("Insira o nome: ");
    scanf("%s", pessoa[index].nome);
    while(getchar() != '\n');

    printf("DDD: ");
    scanf("%s", pessoa[index].ddd);
    while(getchar() != '\n');

    printf("Numero: ");
    scanf("%s", pessoa[index].numero);
    while(getchar() != '\n');

    lista = fopen("lista_telefonica.txt", "r");

    if(lista != NULL){
        strncmp();
    }
    else{
        printf("Lista vazia!\n");
    }

    fclose(lista);
}

int main(){
    int tamanho = 50, quant_elem = 0, index = 0, op = 9;

    Agenda *pessoa = malloc(tamanho * sizeof(Agenda));

    FILE * lista;

    lista = fopen("lista_telefonica.txt", "w");

    fclose(lista);

    while(op != 0){
        printf("----------Agenda Telefonica----------\n");
        printf("[1] - Cadastrar contato\n");
        printf("[2] - Procurar contato\n");
        printf("[0] - Sair");
        printf("> ");
        scanf("%d", &op);
        while(getchar() != '\n');

        switch(op){
            case 0:
                printf("Fechando agenda!\n");
            break;

            case 1:
                if(quant_elem + 1 == tamanho){
                    tamanho *= 2;
                    realloc(pessoa, tamanho);
                }

                cadastrarContato(pessoa, index, lista);

                quant_elem++;
            break;

            case 2:
                procurarContato(pessoa, lista);
            break;

            default:
                printf("Erro! Tente novamente!\n");
            break;
        }
    }

    free(pessoa);

    return 0;
}