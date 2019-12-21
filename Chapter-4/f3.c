/* Write a program to combine contents of two files in a third file.
Add line number at the beginning of each line.*/
#include <stdio.h>
void main(){
    FILE *f1,*f2,*f3;
    char ch;
    int cn = 0;
    f1 = fopen("f1.txt", "r");
    f2 = fopen("f2.txt", "r");
    f3 = fopen("f3.txt", "w+");

    while((ch = fgetc(f1)) != EOF){
            if (cn == 0){
                fprintf(f3," %d  %c",cn++,ch);
            }
            else if (ch == '\n' || cn == 0){
                fprintf(f3,"%c %d  ",ch,cn++);
            }
            else{
                fputc(ch,f3);
            }
    }
    if(ch == EOF){
        fputc('\n',f3);
    }
    while((ch = fgetc(f2)) != EOF){
            if (cn == 0){
                fprintf(f3," %d  %c",cn++,ch);
            }
            else if (ch == '\n' || cn == 0){
                fprintf(f3,"%c %d  ",ch,cn++);
            }
            else{
                fputc(ch,f3);
            }
    }
    fclose(f3);
   // system("f3.txt");
 }
