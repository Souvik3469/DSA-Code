#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    int n = 7;
    
    for (int i = 1, a=1; i < n; i++,a++)
    {

        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("%d ",a);
        }
        for (int j = 1; j < i; j++)
        {

            printf("%d ",a);
        }

        printf("\n");
    }
    for (int i = 1,a=n; i <= n; i++,a--)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("  ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("%d ",a);
        }
        for (int j = i; j < n; j++)
        {
            printf("%d ",a);
        }

        printf("\n");
    }
}
