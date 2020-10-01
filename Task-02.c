#include <stdio.h>
int main()
{
    int sum=0,i,j;
   //Patterns
   for(i=1; i<=5;  i++){

            for(j=1; j<=i; j++)
           {
                printf("%d\t",++sum);
           }
            printf("\n");
}
}


