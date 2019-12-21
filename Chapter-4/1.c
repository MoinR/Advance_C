/*
    * Subject : Execution time analysis
    * Author  : Moin Memon
*/
#include <stdio.h>
#define pf printf
#define sf scanf
#define m main

void m(){
    int a = 0;
    while(a != 100){
        pf("\n%d",a);
        a++;
    }

}

/*
    * -------- test - 1 -------- *
    * Using register variable
    * execution time : 1.344 s

    * code:
        register int a = 0;

        while(a != 100){
            pf("\n%d",a);
            a++;
        }
    * -------------X------------*

    X -------- test - 2 -------- X

    * Using normal variable
    * execution time : 1.829 s
    * code:
        int a = 0;

        while(a != 100){
            pf("\n%d",a);
            a++;
        }
    * --------------------------*

*/
