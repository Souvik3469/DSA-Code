#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    //    clrscr();

    int n=5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1, a=1 ; j <= i; j++, a++)
        {
            printf("%d ", a);
        }
        printf("\n");
    }
}