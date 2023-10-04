#include <stdio.h>

void print(char mat[3][3]){

    system("CLS");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("|%c", mat[i][j]);
        }

        printf("|\n");
    }

    printf("\n");
}

void gameplay(char mat[3][3]){
    int jlin, jcol, lin, col, cont = 0, cond = 1;

    while(cond != 0){
        do{
            printf("Jogador 1:\n\n");

            do{
                printf("Linha > ");
                scanf("%d", &jlin);
                while((getchar()) != '\n');

                if(jlin < 1 || jlin > 3){
                    printf("Erro!\n\n");
                }
            }while(jlin < 1 || jlin > 3);

            lin = jlin - 1;
            
            do{
                printf("Coluna > ");
                scanf("%d", &jcol);
                while((getchar()) != '\n');

                if(jcol < 1 || jcol > 3){
                    printf("Erro!\n\n");
                }
            }while(jcol < 1 || jcol > 3);

            col = jcol - 1;

            if(mat[lin][col] == 'X' || mat[lin][col] == 'O'){
                printf("Este espaco ja esta ocupado!\n\n");
            }
            else if(mat[lin][col] != 'X' && mat[lin][col] != 'O'){
                mat[lin][col] = 'X';
                break;
            }
        }while(mat[lin][col] == 'X' || mat[lin][col] == 'O');

        print(mat);
        cond = end(mat, cond);

        if(cond == 0){
            break;
        }

        cont += 1;

        if(cont == 9){
            printf("Empate!\n");
            cond = 0;
            break;
        }

        do{
            printf("Jogador 2:\n\n");

            do{
                printf("Linha > ");
                scanf("%d", &jlin);
                while((getchar()) != '\n');

                if(jlin < 1 || jlin > 3){
                    printf("Erro!\n\n");
                }
            }while(jlin < 1 || jlin > 3);

            lin = jlin - 1;
            
            do{
                printf("Coluna > ");
                scanf("%d", &jcol);
                while((getchar()) != '\n');

                if(jcol < 1 || jcol > 3){
                    printf("Erro!\n\n");
                }
            }while(jcol < 1 || jcol > 3);

            col = jcol - 1;            

            if(mat[lin][col] == 'X' || mat[lin][col] == 'O'){
                printf("Este espaco ja esta ocupado!\n\n");
            }
            else if(mat[lin][col] != 'X' && mat[lin][col] != 'O'){
                mat[lin][col] = 'O';
                break;
            }
        }while(mat[lin][col] == 'X' || mat[lin][col] == 'O');

        print(mat);
        end(mat, cond);

        cont += 1;

        if(cond == 0){
            break;
        }
    }
}

int end(char mat[3][3], int cond){
    for(int i = 0; i < 3; i++){
        if(mat[i][0] == mat[i][1] && mat[i][0] == mat[i][2]){
            if(mat[i][0] == 'X'){
                printf("Jogador 1 Venceu!\n");
                cond = 0;
                return cond;
            }
            else if(mat[i][0] == 'O'){
                printf("Jogador 2 Venceu!\n");
                cond = 0;
                return cond;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        if(mat[0][i] == mat[1][i] && mat[0][i] == mat[2][i]){
            if(mat[0][i] == 'X'){
                printf("Jogador 1 Venceu!\n");
                cond = 0;
                return cond;
            }
            else if(mat[0][i] == 'O'){
                printf("Jogador 2 Venceu!\n");
                cond = 0;
                return cond;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        if(mat[0][0] == mat[1][1] && mat[0][0] == mat[2][2]){
            if(mat[0][0] == 'X'){
                printf("Jogador 1 Venceu!\n");
                cond = 0;
                return cond;
            }
            else if(mat[0][0] == 'O'){
                printf("Jogador 2 Venceu!\n");
                cond = 0;
                return cond;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        if(mat[0][2] == mat[1][1] && mat[0][2] == mat[2][0]){
            if(mat[0][2] == 'X'){
                printf("Jogador 1 Venceu!\n");
                cond = 0;
                return cond;
            }
            else if(mat[0][2] == 'O'){
                printf("Jogador2 Venceu!\n");
                cond = 0;
                return cond;
            }
        }
    }
}

int main(){
    char mat[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

    print(mat);
    
    gameplay(mat);

    return 0;
}