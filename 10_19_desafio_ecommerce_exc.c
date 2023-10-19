#include <stdio.h>
#include <stdlib.h>

void cleanBuffer(){
    while(getchar() != '\n');
}

typedef struct product_t
{
    char name_product[50];
    float price_product;
    int qty_product;
}Product;

void printProducts(Product * products, int qty){
    printf("||| Products |||\n");

    for(int i = 0; i < qty; i++){
        printf("|Product %d|\n", i+1);
        printf("%s: R$%.2f ", products[i].name_product, products[i].price_product);
        printf("| quantity: %d\n\n", products[i].qty_product);
    }
}

void buyProduct(Product * products, int qty){
    char choice[50], yorn[2];

    printf("||| Select product |||\n");
    scanf("%[^\n]", choice);
    cleanBuffer();

    for(int i = 0; i < qty; i++){
        if(choice == products[i].name_product){
            printf("You want to buy %s?\n", products[i].name_product);
            printf("[y / n]\n");
            scanf(" %c", yorn);
            cleanBuffer();

            if(yorn == 'y' || yorn == 'Y'){
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
                ||||||||||||||||||||||||||||||||||||||||
            }
        }
        else{
            printf("We didn't find that product!\n\n");
        }
    }
}

void registerProduct(Product * products, int qty, int index){
    printf("\n||| Register |||\n");
    printf("Product name: ");
    scanf("%[^\n]", products[index].name_product);
    cleanBuffer();

    printf("Product price: ");
    scanf("%f", &products[index].price_product);
    cleanBuffer();

    printf("Product quantity: ");
    scanf("%d", &products[index].qty_product);
    cleanBuffer();

    printf("\n");

    index++;
    qty++;
}

int main(){
    int size = 1, op = 9, qty = 0, index = 0;

    Product * products = malloc(size * sizeof(Product));

    FILE * list;

    list = fopen("orçamento.txt", "w");
    fclose(list);

    while(op != 0){
        printf("||| Store |||\n");
        printf("[1] - Buy product\n");
        printf("[2] - Register product\n");
        printf("[0] - Exit\n");
        printf("> ");
        scanf("%d", &op);
        cleanBuffer();

        switch(op){
            case 0:
                printf("Exit status!\n");
                break;

            case 1:
                printProducts(products, qty);
                buyProduct(products, qty);
                break;

            case 2:
                if(qty == size){
                    size *= 2;
                    realloc(products, size);
                }

                registerProduct(products, qty, index);
                break;
            
            default:
                printf("Error! Try again!\n\n");
            break;
        }
    }

    return 0;
}