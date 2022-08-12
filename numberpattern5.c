#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    //    clrscr();

    int n=5;

    for (int i =1,a=n; i <= n; i++,a--)
    {
        for (int j = 1 ; j <= i; j++)
        {
            printf("%d ", a);
        }
        printf("\n");
    }
}