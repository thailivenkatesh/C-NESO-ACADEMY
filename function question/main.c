/*#include <stdio.h>
#include <stdlib.h>
int func(int num)
    {
        int count=2;
        while (num)
        {
            count++;
            num>>=2;
        }
        return (count) ;
    }
int main()
{   int countt,n=435;
    countt=func(n);
    printf("count=%d",countt);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
void f1(int a,int b)
{
    int c;
    c=a;a=b;b=c;
}
void f2(int *a,int *b)

{
    int c;
    c=*a; *a=*b; *b=c;///c=5, *a=6 => b=6[orig] , *b=5 => c=5[orig]
}
int main()
{
    int a=4,b=5,c=6;

    f1(a,b);

    f2(&b,&c);

    printf("%d",c-a-b);///5-4-6


    return 0;
}
*/

#include<stdio.h>
int fun()
{
    static int num=16;
    return num--;
}
int main()

{
    for (fun();fun();fun())
    {
        printf("%d ",fun());
    }
        return 0;

}
