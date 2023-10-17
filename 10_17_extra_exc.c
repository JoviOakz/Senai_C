#include <stdio.h>

typedef struct veiculos_t
{
    char modelo[30];
    char fabricante[30];
    char marca[30];
    char cor[30];
}Veiculos;

void inserirCarros(Veiculos *carro, int tamanho, FILE *lista){
    for(int i = 0; i < tamanho; i++){
        printf("Insira os dados do carro %d:\n", i+1);
        printf("Modelo: ");
        scanf("%s", carro[i].modelo);
        while(getchar() != '\n');

        printf("Fabricante: ");
        scanf("%s", carro[i].fabricante);
        while(getchar() != '\n');

        printf("Marca: ");
        scanf("%s", carro[i].marca);
        while(getchar() != '\n');

        printf("Cor: ");
        scanf("%s", carro[i].cor);
        while(getchar() != '\n');

        printf("\n");

        lista = fopen("lista_carros.txt", "a");
        fprintf(lista, "|| Carro %d ||\nModelo: %s\nFabricante: %s\n", i+1, carro[i].modelo, carro[i].fabricante);
        fprintf(lista, "Marca: %s\nCor: %s\n\n", carro[i].marca, carro[i].cor);
        fclose(lista);
    }
}

int main(){
    int tamanho;

    printf("Insira a quantidade de veiculos serao inseridos: ");
    scanf("%d", &tamanho);

    Veiculos *carro = malloc(tamanho * sizeof(Veiculos));

    FILE * lista;

    lista = fopen("lista_carros.txt", "w");
    fclose(lista);

    inserirCarros(carro, tamanho, lista);

    return 0;
}