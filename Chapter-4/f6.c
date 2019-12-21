/* Write a program to count number of lines, words and characters in a file. */
#include <stdio.h>

void main(){
    FILE *fp;
    int w = 0,c = 0 ,l = 0;
    char ch;
    fp = fopen("f6.txt","r");

    while((ch = fgetc(fp)) != EOF){
        if(ch == ' '){
            w++;
        }else if(ch == '\n'){
            l++;
        }else {
            c++;
        }
    }
    printf("File details : \n");
    printf("\nNumber of Lines : %d",l);
    printf("\nNumber of words : %d",w);
    printf("\nNumber of characters  : %d",c);
}
