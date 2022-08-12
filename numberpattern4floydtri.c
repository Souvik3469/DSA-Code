#include <stdio.h>
int main()
{

    int k = 1;
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;
}