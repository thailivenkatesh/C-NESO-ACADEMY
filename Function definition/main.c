#include <stdio.h>
#include <stdlib.h>

int add(int , int );
int main()
{   int a,b,sum;
    printf("Enter any number : ");
    scanf("%d",&a);

    printf("Enter second number ");
    scanf("%d",&b);


    sum=add(a,b);
    printf("%d + %d = %d",a,b,sum);
     return 0;
 }
    int add(int m , int n)
    {
        return (m+n);
    }




