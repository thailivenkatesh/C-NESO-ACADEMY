#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seen[10]= {0};

    int N;

    printf("Enter the number : ");
    scanf("%d",&N);

    int rem;
    while (N>0)
    {
        rem=N%10;
        if (seen[rem]==0)
            break;
        else
            seen[rem]=1;
        N=N/10;
    }
    if (N>0)
    {
        printf("Digits are repeated.");
    }
    else
        printf("Digits are not repeated.");
    return 0;
}
