/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter an integer\n");
    scanf("%d",&n);

    while (n!=0)
    {
        printf("Enter an integer\n");
        scanf("%d",&n);
    }
    printf("You are out of the chakarvyuh.");
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
do{
    printf("Enter an integer\n");
    scanf("%d",&n);
  }
    while (n!=0);

    printf("You are out of the chakarvyuh.");
    return 0;
}
