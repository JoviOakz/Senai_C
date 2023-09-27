#include <stdio.h>

void difAbsoluta(int *valores_1, int *valores_2){
    int soma_1 = 0;
    int soma_2 = 0;

    for(int i = 0; i < 3; i++){
        soma_1 += valores_1[i];
    }

    for(int i = 0; i < 3; i++){
        soma_2 += valores_2[i];
    }

    printf("A subtracao absoluta eh: %d", soma_1 - soma_2);
}

int main(){
    int arr_1[3] = {4, 7, 12};
    int arr_2[3] = {6, 9, 3};

    difAbsoluta(&arr_1, &arr_2);

    return 0;
}