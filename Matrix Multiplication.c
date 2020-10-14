#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],multiply[10][10];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum=0;


    printf("Enter the number of rows and columns of first Matrix: ");
    scanf("%d %d",&arows, &acolumns);

    printf("Enter the number of rows and columns of second Matrix: ");
    scanf("%d %d",&brows, &bcolumns);

    if(acolumns!=brows)
    {
         printf("\nThe multiplication isn't possible.\n");
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

 // Multiplication of the Matrices

   for (i = 0; i < arows; i++) {
      for (j = 0; j < bcolumns; j++) {
        for (k = 0; k < brows; k++) {
          sum = sum + a[i][k]*b[k][j];
        }
        multiply[i][j] = sum;
        sum = 0;
      }
    }
    printf("\nMultiplication of Entered Matrices:-\n");
    for (i = 0; i < arows; i++) {
      for (j = 0; j < bcolumns; j++)
        printf("%d\t", multiply[i][j]);
      printf("\n");
    }
  }
  return 0;
}
