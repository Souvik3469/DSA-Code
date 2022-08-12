#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j < i; j++)
        {
            if (i == n || j == 1)
                printf("* ");
            else
                printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == n || j == i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}
