#include <stdio.h>
#include <stdlib.h>

int main()
{   int binary,rem,x=1,decimal=0;///x-weight

    printf("Enter the binary number : ");
    scanf("%d",&binary);

    while (binary!=0)

    {
        rem=binary%10;
        decimal=decimal+rem*x;
        binary=binary/10;
        x=x*2;
    }
    printf("Entered binary number is equivalent to %d",decimal);

    return 0;
}
