#include<stdio.h>

    int main()
{
    int nor,noc,sum=0;
    int i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&nor);

    printf("Enter the number of column : ");
    scanf("%d",&noc);

    int arr[nor][noc];
    
    printf("Enter elements : \n");
    for (i=0;i<nor;i++)
    {   for (j=0;j<noc;j++)
    {
    scanf("%d",&arr[nor][noc]);
    }
    }
 /*   printf("ARRAY IS : ");
    for (i=0;i<nor;i++)
    {
        for (j=0;j<noc;j++)
        {
            printf("%d ",arr[i][j]);
           
        }

    }
    */
    printf("Row total = ");
   for (i=0;i<nor;i++)
    {
        for (j=0;j<noc;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
  
 return 0;
}

