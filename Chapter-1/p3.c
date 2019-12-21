#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct product{
    int prod_code;
    char prod_name[10];
    float prod_price;
}p[5];
void inc_price();


void main(){
    int i = 0;
    for(i = 0; i < MAX; i++){
        printf("Enter product code : ");
        scanf("%d",&p[i].prod_code);

        fflush(stdin);

        printf("Enter product name : ");
        gets(p[i].prod_name);

        printf("Enter price of product ");
        scanf("%f",&p[i].prod_price);
    }

    printf("\n********** Product Information ***********\n");
    printf("Product code \t Product name \t Product price ");
    for(i = 0; i < MAX; i++){
        printf("\n%d\t\t%s\t\t%.2f",p[i].prod_code,p[i].prod_name,p[i].prod_price);
    }

    inc_price();
    printf("\n********** Price Information ***********\n");
    printf("Product code \t Product name \t Product price ");

    for(i = 0; i < MAX; i++){
        printf("\n%d\t\t%s\t\t%.2f",p[i].prod_code,p[i].prod_name,p[i].prod_price);
    }
}

void inc_price(){
    int i = 0;
    while(i < MAX){
        p[i].prod_price += p[i].prod_price * 0.1 ;
        i++;
    }
}

