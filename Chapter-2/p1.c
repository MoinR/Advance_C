#include <stdio.h>
void swap(int *,int *);
void main(){
    int x = 100;
    int y = 500;
    swap(&x,&y);
    printf("X = %d",x);
    printf("\nY = %d",y);
}
void swap(int *a,int *b){
    int t = *b;
    *b = *a;
    *a = t;
}
