#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    int n = 5;

    for (int i = 1; i < n; i++)
    {
        int a=1;
        for (int j = i; j <= n; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("%d ",a++);
        }
        for (int j = 1; j < i; j++)
        {

            printf("%d ",a++);
        }

        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        int a=1;
        for (int j = 1; j <= i; j++)
        {

            printf("  ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("%d ",a++);
        }
        for (int j = i; j < n; j++)
        {
            printf("%d ",a++);
        }

        printf("\n");
    }
}