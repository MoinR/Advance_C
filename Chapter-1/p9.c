/*Define a structure employee with members employee name, basic pay, dearness allowance, house rent, net salary.
Declare an array of 5 employees.Write a function which calculates the net salary of employees
 and prints all employee details in descending order of their net salary.*/
#include <stdio.h>
#define X 5


struct emp{
    char name[10];
    int b_pay;
    int d_a;
    int h_rent;
    int net_sal;
};
void getDetails(struct emp *a);
void showDetails(struct emp *b);
void main(){
    struct emp e[X];
    getDetails(e);
    showDetails(e);
}


void getDetails(struct emp *a){
        int i;
        for(i = 0; i < X; i++){
            printf("\nEnter employee name : ");
            scanf("%s",a[i].name);
            printf("\nEnter basic pay  : ");
            scanf("%d",&a[i].b_pay);
            printf("\nEnter dearness allowance  : ");
            scanf("%d",&a[i].d_a);
            printf("\nEnter House Rent :  ");
            scanf("%d",&a[i].h_rent);
        }
}
void showDetails(struct emp *b){

    int i,j;
    struct emp tmp;
    int max;
    for(i = 0; i < X; i++){
        b[i].net_sal = b[i].b_pay + b[i].d_a -b[i].h_rent;
    }

    //Applying bubble sort algorithm
    for(i = 0; i < X; i++){
        for(j = 0; j < X - 1; j++){
               if(b[j+1].net_sal > b[j].net_sal){
                    tmp = b[j];
                    b[j] = b[j+1];
                    b[j+1]  = tmp;
               }
        }

    }
    printf("\n|------------Employee Details ------------|");
    printf("\nName \t Basic Pay \t DA \t Rent \t Net salary ");
    for(i = 0; i < X; i++){
            //printf("\n Salary : %d",b[i].net_sal);
            printf("\n%s\t%d\t\t%d\t\t%d\t\t%d",b[i].name,b[i].b_pay, b[i].d_a,b[i].h_rent,b[i].net_sal);

    }
}
