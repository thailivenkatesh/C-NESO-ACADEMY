#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i,rem,sum=0;

    printf("Enter a number : ");
    scanf("%d",&number);

    for (i=1;i<number;i++)
    {
        rem=number%i;
        if (rem==0)
        {
            sum=sum+i;
        }
    }
    if (sum==number)
    {
        printf("%d is a perfect number. \n",number);
    }
    else
    {
        printf("%d is not a perfect number.",number);
    }
    return 0;
}
