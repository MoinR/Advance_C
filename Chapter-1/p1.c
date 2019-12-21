#include <stdio.h>
#define X 5

struct state{
    int code;
    char name[10];
    int dists;
    float population;
};

void main(){
    int i;
    struct state s[X];
    for(i = 0; i < X; i++){
        printf("Enter state code: ");
        scanf("%d",&s[i].code);

        printf("Enter state Name: ");
        scanf("%s",s[i].name);

        printf("Enter number of districts in State : ");
        scanf("%d",&s[i].dists);

        printf("Enter state population : ");
        scanf("%f",&s[i].population);

    }
    printf("\n|------------ State Details --------------|");
    printf("\nCode \t Name \t Districts \t Population");
    for(i = 0; i < X; i++){
        printf("\n%d \t %s \t\t %d \t %.2f",s[i].code,s[i].name,s[i].dists,s[i].population);
    }
}
