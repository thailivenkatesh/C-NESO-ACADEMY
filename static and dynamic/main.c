 ///STATIC SCOPING
 /*
#include <stdio.h>
#include <stdlib.h>
    int fun1(int);
    int fun2(int);
    int a=5;
int main()
{
    int a=10;

    a = fun1(a);
    printf("%d",a);
}

int fun1 (int a)
    {   int b;
        b=a+10;
        b=fun2(b);
        return b;
    }
int fun2 (int b)
    {
        int c;
        c=a+b;
        return c;
    }
*/



#include<stdio.h>
int a,b;
void print ()
{
    printf(" %d %d ",a,b);
}

int fun1()

{
    int a,c;
    a=0,b=1,c=2;
    return c;
}

int fun2()
{
    int b;
    a=3;
    b=4;
    print();
}

int main()
{
    a=fun1();
    fun2();

}
