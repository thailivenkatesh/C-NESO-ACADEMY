#include<stdio.h>
#define N 50
    int main()
{
    int nor,noc,choice,sum=0;
    int i,j;
    int arr[N][N];

    printf("Enter the number of rows : ");
    scanf("%d",&nor);

    printf("Enter the number of column : ");
    scanf("%d",&noc);

    printf("Enter elements : \n");
    for (i=0;i<nor;i++)
        {   for (j=0;j<noc;j++)
            {
                 scanf("%d",&arr[N][N]);
            }
        }
    
    printf("Enter 0 for row sum and 1 for column sum");
    scanf("%d",&choice);
    if (choice==0)
    {
        for (i=0;i<nor;i++)
        {
            for (j=0;j<noc;j++)
            {
                sum=sum+arr[i][j];
            }
        
            printf("%d ",sum);
            sum=0;
        }
    }
    else
    {
        for (j=0;j<noc;j++)
            {
                for(i=0;i<nor;i++)
                {
                    sum=sum+arr[i][j];
                }
            }
    }
 return 0;
}

