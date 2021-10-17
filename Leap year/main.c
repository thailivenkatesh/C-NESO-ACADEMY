/*

#include <stdio.h>
#include <stdlib.h>

int main()
{   int year;

    printf("Enter any year : ");
    scanf("%d",&year);

    if (year%400==0 )
    {
        printf("%d is a leap year.\n",year);
    }
    else if (year%100==0)
    {
        printf("%d is common year. \n",year);
    }
    else if (year%4==0)
    {
        printf("%d is leap year : ",year);
    }
    else
    {
        printf("%d is common year",year);
    }

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{   int year;

    printf("Enter any year : ");
    scanf("%d",&year);

  if ((year%4==0 && year%100!=0) || year %400==0)
    printf("%d is leap year.",year);
  else
    printf("%d is a common year",year);1
    return 0;
}

