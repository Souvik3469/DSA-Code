#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{

    //    clrscr();

    int coeff = 1;
    int i, j, k;
    int n = 8;

    for (i = 0; i < n; i++)
    {
        for (j = i; j <= n; j++)
        {

            printf("  ");
        }
        for (k = 0; k <= i; k++)
        {
            if (k == 0 || i == 0)
            {

                coeff = 1;
            }
            else
            {

                coeff = coeff * (i - k + 1) / k;
            }

            printf("%4d", coeff);
        }
        printf("\n");
    }
}