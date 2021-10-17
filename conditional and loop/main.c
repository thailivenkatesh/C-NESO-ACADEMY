/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    for(printf("one\n"); i<3 && printf(""); i++)
    {
        printf("Hi\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=-5;
    while (i<=5)
    {
        if (i>=0)
            break;
        else
        {
            i++;
            continue;
        }
        printf("NESO");
    }

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  for (i=0;i<20;i++)
{

    switch (i)
        {
            case 0: i+=5;
            case 1 : i+=2;
            case 5 : i+=5;
            default : i+=4;

        }
        printf("%d\n",i);
}
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=1024;

   for (;i;i>>=1)
   {
       printf("HELLO WORLD \n");

   }

 return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x=3;
  if (x==2);x=0;
  if (x==3) x++;
  else x+=2;
  printf("x=%d",x);
 return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int i=500;
   while (i++!=0);
   printf("%d",i);


 return 0;
}
