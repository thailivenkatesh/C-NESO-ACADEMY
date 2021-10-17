#include <stdio.h>
#include <stdlib.h>

int main()
{
   int no_of_row,i,j;

   printf("Enter the number of row you want in pyramid : ");
   scanf("%d",&no_of_row);

   for (i=1;i<=no_of_row;i++)
   {
       for (j=1;j<=2* no_of_row -1;j++)
       {
           if ((j>= no_of_row -(i-1)) && (j<= no_of_row +(i-1) ))
            printf("*");
           else
            printf(" ");
       }
       printf("\n");
   }


    return 0;
}
