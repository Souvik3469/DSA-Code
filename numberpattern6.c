#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    //    clrscr();

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                printf("2 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}