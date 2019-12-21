/* write a c program to find the size of file  */
#include <stdio.h>
void main(){
    FILE *fp;
    char ch;
    int len ;

    fp = fopen("f1.txt", "r");

    fseek(fp, 0, SEEK_END);
    len = ftell(fp);

    printf("size of file is : %d",len );
    fclose(fp);
}
