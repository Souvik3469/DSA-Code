#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    int n = 5;

    for (int i = 1,a=n; i <= n; i++,a--)
    {
        int p=a;
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = i; j <= n ; j++)
        {
            printf("%d ",p--);
        }
        printf("\n");
    }
}
