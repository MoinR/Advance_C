#include <stdio.h>
void upper(char *a);
void main(){
    char str[10];

    printf("Enter A string (Lower): ");
    gets(str);
    upper(str);
    printf("String to uppercase : %s",str);

}

void upper(char *a){
    while(*a != '\0'){
        if(*a >= 97){
            *a = *a - 32;
        }
        a++;
    }
}


