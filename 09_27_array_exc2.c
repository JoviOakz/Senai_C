#include <stdio.h>

void inverteVetor(char *palavra){
    for(int i = 9; i > -1; i--){
        printf("%c", palavra[i]);
    }
}

int main(){
    char arr[10] = {"Seboso"};

    inverteVetor(arr);

    return 0;
}