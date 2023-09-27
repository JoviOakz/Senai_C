#include <stdio.h>

void imprimeVet(int *array){
    for(int i = 0; i < 3; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int arr[3] = {33, 21, 76};

    imprimeVet(&arr);

    return 0;
}