
#include <stdio.h>

struct state{
    char name[10];
    int men;
    int women;
};
struct population {
        struct state a;
        int total;
};

void main(){
        struct population p;

        printf("\nEnter Name of state : ");
        scanf("%s",p.a.name);

        printf("\nEnter Number of men in state : ");
        scanf("%d",&p.a.men);

        printf("\nEnter Number of men in state : ");
        scanf("%d",&p.a.women);

        p.total = p.a.men + p.a.women;

        printf("\n|----------------State details ---------------- |");

        printf("\nName \t Men \t Women \t Total ");
        printf("\n%s \t%d \t%d \t%d",p.a.name,p.a.men,p.a.women,p.total );

}
