#include <stdio.h>
int main()
{

    int k = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (j < i)
            {
                printf("%d+", j);
            }
            else
            {
                printf("%d", j);
            }

            k++;
        }
        printf("=%d", k);
        printf("\n");
    }
    return 0;
}