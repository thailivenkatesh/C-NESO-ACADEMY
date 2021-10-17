#include <stdio.h>
#include <stdlib.h>

int main()
{
    int remainder, x=0 , number , q ;

    printf("\n Enter any number : ");
    scanf("%d",&number);

    q=number;


    while (q!=0)
    {
        remainder=q%10;

        x= x*10 + remainder;

        q=q/10number
    }

    if (x==number)
    {
        printf(" %d is palidrome",number);

    }
    else
    {
        printf(" %d is not palidrome",number);
    }

    return 0;
}
