#include <stdio.h>
#include <stdlib.h>
int fun(int , int);
int main()
{   int n1,n2,sum;
    printf("Enter a number : ");
    scanf("%d",&n1);

    printf("Enter a number :");
    scanf("%d",&n2);

    sum=fun(n1,n2);

    printf("%d + %d = %d",n1,n2,sum);

    return 0;
}
