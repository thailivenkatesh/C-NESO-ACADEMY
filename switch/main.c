#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Please enter your rating out of 5 : \n");
    scanf("%d",&n);

    switch (n)
    {
        case 1: printf("Very Poor");
        break;
        case 2: printf("Poor");
        break;
        case 3: printf("Average");
        break;
        case 4: printf("Good");
        break;
        case 5: printf("Excellent");
        break;
        default : printf("WRONG INPUT");
        break;
    }
    return 0;
}
