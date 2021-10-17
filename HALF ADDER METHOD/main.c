#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,carry;

    printf("Enter any two number \n");
    scanf("%d%d",&a,&b);

    while (b!=0)
    {
        sum=a^b;
        carry=(a&b)<<1;

        a=sum ;
        b=carry;
    }
    printf("\nsum = %d \n",sum);
    return 0;
}
