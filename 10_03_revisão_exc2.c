#include <stdio.h>



int main(){
    int arr[10] = {2, 3, 5, 7, 8, 12, 22, 12, 33, 10};
    int pos1, pos2, op = 9;

    while(op != 0){
        printf("----Calculadora com Posicao----\n");
    
        for(int i = 0; i < 10; i++){
            printf("%d ", arr[i]);
        }

        printf("\nSelecione o operador:\n");
        printf("[1] - Soma\n");
        printf("[2] - Subtracao\n");
        printf("[3] - Divisao\n");
        printf("[4] - Multiplicacao\n");
        printf("> ");
        scanf("%d", &op);

        switch(op){
            case 0:
                printf("Saindo!\n");
            break;

            case 1:
                do{
                    printf("Escolha a primeira posicao do array: ");
                    scanf("%d", &pos1);
                    while((getchar()) != '\n');

                    if(pos1 < 1 || pos1 > 10){
                        printf("Erro!\n");
                    }
                }while(pos1 < 1 || pos1 > 10);

                do{
                    printf("Escolha a segunda posicao do array: ");
                    scanf("%d", &pos2);
                    while((getchar()) != '\n');

                    if(pos2 < 1 || pos2 > 10){
                        printf("Erro!\n");
                    }
                }while(pos2 < 1 || pos2 > 10);

                printf("A soma dos valores %d e %d eh: %d\n\n", arr[pos1-1], arr[pos2-1], arr[pos1-1] + arr[pos2-1]);
            break;

            case 2:
                do{
                    printf("Escolha a primeira posicao do array: ");
                    scanf("%d", &pos1);
                    while((getchar()) != '\n');

                    if(pos1 < 1 || pos1 > 10){
                        printf("Erro!\n");
                    }
                }while(pos1 < 1 || pos1 > 10);

                do{
                    printf("Escolha a segunda posicao do array: ");
                    scanf("%d", &pos2);
                    while((getchar()) != '\n');

                    if(pos2 < 1 || pos2 > 10){
                        printf("Erro!\n");
                    }
                }while(pos2 < 1 || pos2 > 10);

                printf("A subtracao dos valores %d e %d eh: %d\n\n", arr[pos1-1], arr[pos2-1], arr[pos1-1] - arr[pos2-1]);
            break;

            case 3:
                do{
                    printf("Escolha a primeira posicao do array: ");
                    scanf("%d", &pos1);
                    while((getchar()) != '\n');

                    if(pos1 < 1 || pos1 > 10){
                        printf("Erro!\n");
                    }
                }while(pos1 < 1 || pos1 > 10);

                do{
                    printf("Escolha a segunda posicao do array: ");
                    scanf("%d", &pos2);
                    while((getchar()) != '\n');

                    if(pos2 < 1 || pos2 > 10){
                        printf("Erro!\n");
                    }
                }while(pos2 < 1 || pos2 > 10);

                printf("A divisao dos valores %d e %d eh: %d\n\n", arr[pos1-1], arr[pos2-1], arr[pos1-1] / arr[pos2-1]);
            break;

            case 4:
                do{
                    printf("Escolha a primeira posicao do array: ");
                    scanf("%d", &pos1);
                    while((getchar()) != '\n');

                    if(pos1 < 1 || pos1 > 10){
                        printf("Erro!\n");
                    }
                }while(pos1 < 1 || pos1 > 10);

                do{
                    printf("Escolha a segunda posicao do array: ");
                    scanf("%d", &pos2);
                    while((getchar()) != '\n');

                    if(pos2 < 1 || pos2 > 10){
                        printf("Erro!\n");
                    }
                }while(pos2 < 1 || pos2 > 10);

                printf("A multiplicacao dos valores %d e %d eh: %d\n\n", arr[pos1-1], arr[pos2-1], arr[pos1-1] * arr[pos2-1]);
            break;

            default:
                printf("Erro!\n");
            break;
        }
    }

    return 0;
}