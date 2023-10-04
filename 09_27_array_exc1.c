#include <stdio.h>

void imprimeVetor(int *array){
    for(int i = 0; i < 3; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int arr[3] = {33, 21, 76};

    imprimeVetor(arr);

    return 0;
}