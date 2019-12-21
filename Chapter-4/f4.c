/*
Write a program to display number 1 to 100. Redirect the output
of the program to text file.
*/
#include <stdio.h>
void main(){
    FILE *fp;
    int i;
    fp = fopen("num.txt","w");
    for(i = 0; i <= 100; i++){
        fprintf(fp,"%d \n",i);
    }
    fclose(fp);
    
}
