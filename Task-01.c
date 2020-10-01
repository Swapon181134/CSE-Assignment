#include<stdio.h>

main(){

    int i,j;

//Patterns
    for(j=5; j>=1; j--){

        for(i=5; i>=j; i--)
            printf("*");

        printf("\n");
    }
}

