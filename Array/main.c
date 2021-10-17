#include <stdio.h>
#include <stdlib.h>
#define N arr_len
int main()
{   int arr_len, i;
    printf("Enter the length  of an array : ");
    scanf("%d",&arr_len);

    int arr;

    printf("\n Enter numbers \n");
    for (i=0;i<arr_len;i++)
    {
        scanf ("%d",arr[i]);
    }
    ///Before reversing
    for (i=0;i<arr_len;i++)
    {
       printf("%d",arr[i]);
    }
    ///After reversing

    for (i=arr_len-1;i>=0;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
