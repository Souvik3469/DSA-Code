#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = i,a=1; j <= n; j++,a++)
        {

            printf("%d ",a);
        }

        printf("\n");
    }
  
}
