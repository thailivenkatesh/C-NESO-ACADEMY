/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5;
    int var=sizeof(i++);
    printf("%d%d",i,var);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c,d;
  a=1;
  b=1;
  c=++a||b++;
  d=b-- && --a;
  printf("%d %d %d %d",d,c,b,a);
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   unsigned int var=10;///0000 0000 0000 1010
    printf("%d",~var);///   0000 0000 0000 0101

    return 0;
}
