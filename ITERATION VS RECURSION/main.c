///RECURSIVE
/*
#include <stdio.h>
#include <stdlib.h>
int fact(int num)
{
    if (num==1)
        return 1;
    else
     return num*fact(num-1);


}
int main()
{
  printf("%d",fact(5));
    return 0;
}
*/

///ITERATIOIN

#include<stdio.h>
int fact(int num)

{   int res=1;
    while (num!=0)
    {
        res=res*num;
         num--;
    }
    return res;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("factorial of %d is %d",n,fact(n));
}
