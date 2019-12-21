#include <stdio.h>
#define pf printf
#define sf scanf
void main(){
    FILE *f1,*f2;
    char ch;
    int l = 0;

    f1 = fopen("trim.txt","r");
    f2 = fopen("trims.txt","w+");

    while((ch = fgetc(f1)) != EOF){

    }
}
