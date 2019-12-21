#include <stdio.h>
int len(char *a);
void main(){
    char str[10];
    int l; // stores string length
    printf("Enter A string : ");
    gets(str);
    l = len(str);
    printf("String Length : %d",l);

}

int len(char *a){
    int str_len = 0;
    while(*a != '\0'){
        str_len++;
        a++;
    }
    return str_len;
}

