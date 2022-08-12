#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int n = 6;

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j <= n; j++)
        {
            if (i == 1|| j == i || j == n)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}