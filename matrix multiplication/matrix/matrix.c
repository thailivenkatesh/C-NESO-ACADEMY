#include<stdio.h>
#define MAX 50
 int main()
{  
    int a[MAX][MAX] ; int b[MAX][MAX];int product[MAX][MAX]; int sum=0;
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    printf("Enter the rows of a matrix A : ");
    scanf("%d",&arows);

    printf("Enter the column of matrix A ");
    scanf("%d",&acolumns);

    printf("Enter the elements of matrix A \n");

        for (i=0;i<arows;i++)
            {
                for (j=0;j<acolumns;j++)
                    {
                        scanf("%d",&a[i][j]);
                    }

            }
    printf("Enter the number of rows of a matrix B : ");
    scanf("%d",&brows);

    printf("Enter the number of columns of a matrix B :");
    scanf("%d",&bcolumns);

    printf("Enter the elements of matrix B \n");

        for (i=0;i<brows;i++)
            {
                for (j=0;j<bcolumns;j++)
                    {
                        scanf("%d",&b[i][j]);
                    }
            }     

    if (acolumns!=brows)
        {
            printf("SORRY, we can't multiply this matrix");
        }
    else
        {
            for (i=0;i<arows;i++)
                {
                    for (j=0;j<bcolumns;j++)
                        {
                            for (k=0;k<brows;k++)
                                {
                                    sum=sum+a[i][k]*b[k][j];
                                }
                                    
                                product[i][j]=sum;
                                sum=0;
                        }
                }

        }

    printf("RESULTANT MATRIX : \n");

        for (i=0;i<arows;i++)
            {
                for (j=0;j<bcolumns;j++)
                    {
                        printf("%d \t",product[i][j]);
                    }
               
                     printf("\n");
            }
    return 0;

}