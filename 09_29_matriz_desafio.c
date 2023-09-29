#include <stdio.h>

void print(char mat[3][3]){

    system("CLS");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("|%c", mat[i][j]);
        }

        printf("|\n");
    }
}

void gameplay(char mat[3][3]){
    int cont, lin = 0, col = 0;

    while(1 != 0){
        printf("Jogador1:\n");

        do{
            printf("Linha > ");
            scanf("%d", &lin);
            while((getchar()) != '\n');

            if(lin < 0 || lin > 2){
                printf("Erro!\n");
            }
            
            printf("Coluna > ");
            scanf("%d", &col);
            while((getchar()) != '\n');

            if(col < 0 || col > 2){
                printf("Erro!\n");
            }

            if(mat[lin][col] == 'X' || mat[lin][col] == 'O'){
                printf("Erro! Tente novamente\n");
            }

            if(mat[lin][col] != 'X' || mat[lin][col] != 'O'){
                mat[lin][col] = 'X';
            }
        }while(mat[lin][col] == 'X' || mat[lin][col] == 'O');

        printf("Jogador2:\n");

        print(mat);

        do{
            printf("Linha > ");
            scanf("%d", &lin);
            while((getchar()) != '\n');

            if(lin < 0 || lin > 2){
                printf("Erro!\n");
            }
            
            printf("Coluna > ");
            scanf("%d", &col);
            while((getchar()) != '\n');

            if(col < 0 || col > 2){
                printf("Erro!\n");
            }

            if(mat[lin][col] == 'X' || mat[lin][col] == 'O'){
                printf("Erro! Tente novamente\n");
            }

            if(mat[lin][col] != 'X' || mat[lin][col] != 'O'){
                mat[lin][col] = 'O';
            }
        }while(mat[lin][col] == 'X' || mat[lin][col] == 'O');

        print(mat);

        for(int i = 0; i < 3; i++){
            if(mat[i][0] == mat[i][1] && mat[i][0] == mat[i][2]){
                if(mat[i][0] == 'X'){
                    print(mat);
                    printf("Jogador1 Venceu!");
                }
                else{
                    print(mat);
                    printf("Jogador2 Venceu!");
                }
            }
        }

        for(int i = 0; i < 3; i++){
            if(mat[0][i] == mat[1][i] && mat[0][i] == mat[2][i]){
                if(mat[0][i] == 'X'){
                    print(mat);
                    printf("Jogador1 Venceu!");
                }
                else{
                    print(mat);
                    printf("Jogador2 Venceu!");
                }
            }
        }

        for(int i = 0; i < 3; i++){
            if(mat[0][0] == mat[1][1] && mat[0][0] == mat[2][2]){
                if(mat[0][0] == 'X'){
                    print(mat);
                    printf("Jogador1 Venceu!");
                }
                else{
                    print(mat);
                    printf("Jogador2 Venceu!");
                }
            }
        }

        for(int i = 0; i < 3; i++){
            if(mat[0][2] == mat[1][1] && mat[0][2] == mat[2][0]){
                if(mat[0][2] == 'X'){
                    print(mat);
                    printf("Jogador1 Venceu!");
                }
                else{
                    print(mat);
                    printf("Jogador2 Venceu!");
                }
            }
        }

        cont = 0;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(mat[i][j] == 'X' || mat[i][j] == 'O'){
                    cont += 1;
                }
            }
        }

        if(cont == 9){
            print(mat);
            printf("Empate!\n");
        }
    }
}

int main(){
    char mat[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

    print(mat);
    gameplay(mat);

    return 0;
}