/* Write a program to write contents of one file in reverse into
another file. */
#include <stdio.h>
void main(){
    FILE *f1, *f2;
    char ch;
    int i,len;

    f1 = fopen("f1.txt","r");
    f2 = fopen("rev.txt","w+");

    while((ch = fgetc(f1)) != EOF){
        printf("%c",ch);
    }
    /*
        * Setting file pointer position to the last line using fseek();
        * Finding length of file and storing value in the l variable
    */
    fseek(f1, 0, SEEK_END);
    len = ftell(f1);

    for(i = 1; i <= len; i++){
        fseek(f1,-i,SEEK_END);
        ch = fgetc(f1);
        fputc(ch,f2);
        putchar(ch);
    }

    fclose(f1);
    fclose(f2);
}
