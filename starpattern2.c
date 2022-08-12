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
            printf("* ");
        }
        printf("\n");
    }
}
