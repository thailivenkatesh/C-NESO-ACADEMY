#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
int main()

{   int n,factorial;
    printf("Enter any number : ");
    scanf("%d",&n);

    factorial = fact(n);
    printf("factorial of %d is %d",n,factorial);

    return 0;
}
