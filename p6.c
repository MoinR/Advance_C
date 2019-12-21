/*Write a program to accept records of different states using array of structures
 The structure should contain char state and number of int engineering colleges,
int medical colleges, int management colleges and int universities. Calculate total colleges and display the state,
which is having highest number of colleges.*/

#include <stdio.h>
#define X 1
struct state{
        char name[10];
        int no_of_eng;
        int no_of_med;
        int no_of_man;
        int universities;
        int total;
};

// Functions
void calculate(struct state *);
void getDetails(struct state *a);

void main(){
        struct state s[X];
        getDetails(s);
        calculate(s);
}

void getDetails(struct state *a){
        int i;
        for(i = 0; i < X; i++){
            printf("Enter State name : ");
            scanf("%s",a[i].name);
            printf("Enter number of engineering colleges : ");
            scanf("%d",&a[i].no_of_eng);
            printf("Enter number of medical colleges :  ");
            scanf("%d",&a[i].no_of_med);
            printf("Enter number of Management colleges :   ");
            scanf("%d",&a[i].no_of_man);
            printf("Enter number of universities : ");
            scanf("%d",&a[i].universities);
        }
}
void calculate(struct state *x){
        int i,tmp,in;
        for(i = 0; i < X; i++){
                x[i].total = x[i].no_of_eng + x[i].no_of_man + x[i].no_of_med;
        }
        tmp = x[0].total;
        for(i = 0; i < X; i++){
            if(tmp < x[i].total ){
                tmp = x[i].total;
                in = i;
            }
        }
        //printf("%d",x[in].total);
        //printf("%d",in);
        //fflush(stdin);

        printf("\nDetail of state which is having highest Number of college : ");
        printf("\nName \t Engineering \t Medical \t MBA \t Total \n");
        printf("\n%s \t%d\t%d\t%d\t%d",x[in].name,x[in].no_of_eng,  x[in].no_of_med, x[in].no_of_man,x[in].total);


}
