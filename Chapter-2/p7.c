#include <stdio.h>
#include <stdlib.h>
#define MAX 2
struct stu{
    int rollno;
    char name[10];
    char grade;
    int marks[2];
}p[5];
void prepare_result();


void main(){
    int i,j;
    for(i = 0; i < MAX; i++){
        printf("Enter Roll number : ");
        scanf("%d",&p[i].rollno);

        fflush(stdin);

        printf("Enter product name : ");
        gets(p[i].name);
        for(j = 0; j<MAX; j++){
            printf("Enter Marks of subject %d (Out of 50)",j+1);
            scanf("%d",&p[i].marks[j]);
        }


    }
}

void prepare_result(){
    int total = 0,i,j;
    for(i = 0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            total += p[i].marks[j];
        }
    }
}

