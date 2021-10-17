#include<stdio.h>
    int main()
{
    int i,q;
    int *p=&i;
   
    q=p;
    *q =5;
    printf("%d",*p);

    


}