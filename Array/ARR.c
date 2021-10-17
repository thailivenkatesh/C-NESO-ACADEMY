#include <stdio.h>
#include <stdlib.h>
#define N arr_len
int main()
{   int arr_len, i, arr[N];
    printf("Enter the length  of an array : ");
    scanf("%d",&arr_len);

    

    for (i=0;i<N;i++)
    {    printf("\n Enter numbers for index %d \n",i);
         scanf ("%d", &arr[i]);
    }
    ///Before reversing
    printf("Befor Reversing : ");
    for (i=0;i<N;i++)
    {
       printf("%d ", arr[i]);
    }
    ///After reversing
    printf("\nAfter Reversing : ");
    for (i=arr_len-1;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
