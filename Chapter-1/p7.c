/*Define a structure by name time with members seconds, minutes and hours of int type
A variable of the structure would thus represent time.
If time1 and time2 are two variables of the structure type,
write a program to find the difference of two times using a function.*/
#include <stdio.h>

struct date{
    int sec,min,hr;
};
void main(){
    struct date time1;
    struct date time2;
    printf("Enter Details for time 1");

    printf("\nEnter  Hours : ");
    scanf("%d",&time1.hr);

    printf("\nEnter  Minutes : ");
    scanf("%d",&time1.min);

    printf("\nEnter  Seconds: ");
    scanf("%d",&time1.sec);

    printf("Enter Details for time 2");
    printf("\nEnter  Hours : ");
    scanf("%d",&time2.hr);

    printf("\nEnter  Minutes : ");
    scanf("%d",&time2.min);

    printf("\nEnter  Seconds: ");
    scanf("%d",&time2.sec);

    if(time1.hr <= 24 ){
            printf("\n Difference between time1 and time2 : ");
            if(time1.hr > time2.hr || time1.min > time2.min || time1.sec > time2.sec){
                    printf("\n%d hrs : %d mins %d secs",time1.hr - time2.hr, time1.min - time2.min, time1.sec - time2.sec);
            }else{
                    printf("\n%d hrs : %d mins %d secs",time2.hr - time1.hr, time2.min - time1.min, time2.sec - time1.sec);
            }

    }
}
