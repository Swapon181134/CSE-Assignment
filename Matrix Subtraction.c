#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],sub[10][10];
    int arows,acolumns,brows,bcolumns;
    int i,j;


    printf("Enter the number of rows and columns of first Matrix: ");
    scanf("%d %d",&arows, &acolumns);

    printf("Enter the number of rows and columns of second Matrix: ");
    scanf("%d %d",&brows, &bcolumns);

    if(arows!=brows, acolumns!=bcolumns)
    {
         printf("\nThe subtraction isn't possible.\n");
    }
    else
 // Elements Entry
        {
            printf("\nEnter the elements of first Matrix: \n");
    for (i = 0; i < arows; i++)
        for (j = 0 ; j < acolumns; j++)
           scanf("%d", &a[i][j]);


    printf("\nEnter the elements of second Matrix: \n");
    for (i = 0; i < brows; i++)
        for (j = 0 ; j < bcolumns; j++)
           scanf("%d", &b[i][j]);

 // Subtraction of the Matrices

    printf("\nSubtraction of Entered Matrices:-\n");
    for(i = 0; i < arows; i++) {
        for (j = 0 ; j < acolumns; j++)
            {
            sub[i][j] = a[i][j] - b[i][j];

        printf("%d\t", sub[i][j]);
    }
    printf("\n");
    }
    return 0;
}
}
