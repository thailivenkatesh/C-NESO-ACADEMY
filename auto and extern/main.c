/*

#include <stdio.h>
#include <stdlib.h>


int main()
{
  int var;
    return 0;
}

///AND FOLLOWING CODE ARE SAME


#include <stdio.h>
#include <stdlib.h>


int main()
{
   auto int var;
    return 0;
}

*/
/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int var;
    printf("%d",var);///produce any random value
    return 0;
}
*/

/*
///GLOBAL VALUE IS 0
#include <stdio.h>
#include <stdlib.h>

int var;
int main()
{
    printf("%d",var);
    return 0;
}

*/
///EXTERN MODIFIERS

/*  ACCESS VALUE OF A FROM OTHER.C FILE
#include <stdio.h>
#include <stdlib.h>

extern int a;
int main()
{
    printf("%d",a);
    return 0;
}

*/
///USING MULTIPLE TIME Of extern int a does not produce as error as we are declaring it not defining it multiple times
/*
#include <stdio.h>
#include <stdlib.h>

extern int a;
extern int a;
extern int a;
int main()
{
    printf("%d",a);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int a=9;
int main()
{   extern int a;
    printf("%d",a);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>


extern int a =9; ///defined variable , here memory is allocated too
int main()
{

   printf("%d",a);
    return 0;
}

*/
