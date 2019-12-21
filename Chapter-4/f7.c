/*
    * Write a program to create a file called dictionary.dat that
    * contains the information such as Name, Surname, City and Phone
    * number. Write a program to accept a City from user and list details
    * of persons having the given city.
*/
#include <stdio.h>
#include <string.h>
#define M 10
struct std{
    int roll_no;
    char std_name[20];
    char city_name[10];
};

void main(){
    FILE *fp;
    struct std x[5],tmp;
    int i;
    char c_name[5];
    fp = fopen("dictionary.dat","a+");
    printf("Enter Name of city :  ");
    scanf("%s",c_name);

    for(i = 0; i < M; i++){
        printf("Enter Student roll number  : ");
        scanf("%d",&x[i].roll_no);

        printf("Enter Student name : ");
        scanf("%s",x[i].std_name);

        printf("Enter City name: ");
        scanf("%s",x[i].city_name);

        fprintf(fp,"%d \t %s \t %s \n",x[i].roll_no, x[i].std_name,x[i].city_name);
    }

    rewind(fp);

    printf("Roll No. \t Name \t\t City \t");
    for(int i = 0; i < 25; i++){
        fscanf(fp, "%d %s %s",&tmp.roll_no, &tmp.std_name, &tmp.city_name);
        if(stricmp(tmp.city_name, c_name) == 0){
            printf("\n%d \t\t %s \t\t %s",tmp.roll_no, tmp.std_name, tmp.city_name);
        }
    }

}
