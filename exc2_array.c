#include <stdio.h>

int maiorvalor(int *index){
    int maior;

    for(int i = 0; i < 5; i++){
        if(maior < *(index + i)){
            maior = *(index + i);
        }
    }

    printf("O maior valor: %d", maior);
}

int main(){
    int arr[5] = {2, 6, 7, 3, 1};
    int *ptr = arr;

    maiorvalor(ptr);

    return 0;
}