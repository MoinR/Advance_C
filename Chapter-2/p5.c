#include <stdio.h>
void rev(char *a,char *b);
void main(){
    char str[10];
    char rev_str[10];

    printf("Enter A string (Lower): ");
    gets(str);
    rev(str,rev_str);
    printf("Reverse String : %s",rev_str);


}

void rev(char *a,char *b){
    int l = 0;
    while(*a != '\0'){
        l++;
        a++;

    }
    a--;
    while(l > 0){
        *b = *a;
        b++;
        l--;
        a--;
    }
    *b = '\0';


}


