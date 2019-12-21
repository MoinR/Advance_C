#include <stdio.h>
void calc(int *x,int *y,int *add,int *div,int *mul,int *sub);
void main(){
    int x,y,add,div,mul,sub;

    printf("Enter X: ");
    scanf("%d",&x);

    printf("Enter Y: ");
    scanf("%d",&y);

    //Calling function
    calc(&x,&y,&add,&div,&mul,&sub);

    //Printing results
    printf("\nAddition is %d",add);
    printf("\nSubtraction is %d",sub);
    printf("\nMultiplication is %d",mul);
    if(y != 0){
    printf("\ndivision is %d",div);
    }
}
void calc(int *x,int *y,int *add,int *div,int *mul,int *sub){
    *add = *x + *y;
    *sub = *x - *y;
    *mul = *x * *y;
    if(*y == 0)
        printf("Can't divide a number by zero");
    else
    *div = *x / *y;

}
