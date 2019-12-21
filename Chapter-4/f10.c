/*
    * Write a Program to insert the following contents in a file named 
    * Append the contents of File1 in another file File2. Also display the contents of File2 on screen
*/

#include <stdio.h>
#define M 2

struct data{
    int no;
    char name[20];
    float bal;
};

void main(){
    FILE *f1, *f2;
    int i;
    struct data x[M],tmp;

    f1 = fopen("ac.txt","w+");
    f2 = fopen("ac_copy.txt","a+");

    if(f1== NULL || f2 == NULL){
        printf("File not found ");
        return;
    }

    for(i = 0; i < M; i++){
        fflush(stdin);
        printf("Enter Customer number  : ");
        scanf("%d",&x[i].no);
        printf("Enter Customer name : ");
        scanf("%s",x[i].name);
        printf("Enter Balance : ");
        scanf("%f",&x[i].bal);
        fprintf(f1,"%d \t %s \t %.2f \n",x[i].no, x[i].name,x[i].bal);
        fprintf(f2,"%d \t %s \t %.2f \n",x[i].no, x[i].name,x[i].bal);
    }
    rewind(f2);
    printf("Customer No. \t Name \t\t Balance \t");
    for(i = 0; i < M; i++){
        fscanf(f2, "%d %s %f",&tmp.no, &tmp.name,&tmp.bal);
        printf("\n%d \t %s \t %.2f",tmp.no, tmp.name,tmp.bal);
    }
    fclose(f1);
    fclose(f2);

}
