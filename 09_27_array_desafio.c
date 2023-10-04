#include <stdio.h>

void ordenaVetor(int* array){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(array[j] > array[j+1]){
                int aux = array[j+1];
                array[j+1] = array[j];
                array[j] = aux;
            }
        }
    }
    
    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int arr[5] = {4, 2, 8, 23, 3};

    ordenaVetor(arr);

    return 0;
}