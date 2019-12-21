/*Write a program to accept records of different states using array of structures.
The structure should contain char state, int population, int literacy rate and int per capita income.
Display the state whose literacy rate is highest and whose per capita income is highest.
*/

#include <stdio.h>
#define X 1
struct state
{
        char name[10];
        int population;
        int literacy;
        int pci;
        int total;
};

// Functions
void calculate(struct state *);
void getDetails(struct state *a);

void main()
{
        struct state s[X];
        getDetails(s);
        calculate(s);
}

void getDetails(struct state *a)
{
        int i;
        for (i = 0; i < X; i++)
        {
                printf("Enter State name : ");
                scanf("%s", a[i].name);
                printf("Enter Population : ");
                scanf("%d", &a[i].population);
                printf("Enter rate of litreacy : ");
                scanf("%d", &a[i].literacy);
                printf("Enter per capita income :  ");
                scanf("%d", &a[i].pci);
        }
}
void calculate(struct state *x)
{
        int i, tmp, in, tmp2;
        for (i = 0; i < X; i++)
        {
                x[i].total = x[i].population + x[i].pci + x[i].literacy;
        }
        tmp = x[0].literacy;
        tmp2 = x[0].pci;
        for (i = 0; i < X; i++)
        {
                if (tmp < x[i].literacy && tmp2 < x[i].pci)
                {
                        tmp = x[i].total;
                        tmp2 = x[i].pci;
                        in = i;
                }
        }
        printf("\nDetail of state which is having highest rate of literacy and per capita income : ");
        printf("\n Name : %s", x[in].name);
        printf("\n Population : %d", x[in].population);
        printf("\n Literacy : %d", x[in].literacy);
        printf("\n Per capita income : %d", x[in].pci);
}
