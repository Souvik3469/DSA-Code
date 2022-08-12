#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int n = 6;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (i == n || j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}