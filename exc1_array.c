#include <stdio.h>

int arrayfunction(int *index){
    int soma = 0;

    for(int i = 0; i < 5; i++){
        soma += *(index + i);
    }

    printf("%d", soma);
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    arrayfunction(ptr);

    return 0;
}
