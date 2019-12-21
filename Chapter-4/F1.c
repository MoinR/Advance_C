/* Write a c program to display the content of file in upper case letter */
#include <stdio.h>

void main(){
    FILE *fp;
    char file_name[10],ch;
    printf("Enter the file name you want to open :  ");
    scanf("%s",file_name);
    fp = fopen("ac.txt", "w");
    if(fp == NULL){
        printf("\a Error 404");
    }
    printf(EOF);
/*
    while((ch = fgetc(fp)) != EOF){
        if(ch <= 'z' && ch >= 'a')
            printf("%c",ch - 32);
        else
            printf("%c",ch);
    }*/
    fclose(fp);
}
