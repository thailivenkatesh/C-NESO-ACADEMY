#include <stdio.h>
#include <stdlib.h>
    int areaOfRect(int length,int breadth)
    {
        int area = length * breadth;
        return area;
    }


int main()
{   int l,b,a;

    printf("Enter the length of rectangle : ");
    scanf ("%d",&l);

    printf("Enter the breadth of rectangle : ");
    scanf("%d",&b);

    a=areaOfRect(l,b);

    printf("Area of length %d and %d is %d",l,b,a);


    return 0;
}
