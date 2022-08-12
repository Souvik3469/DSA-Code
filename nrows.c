#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j < n; j++)
        {
            int a = j * 2 + 1;
            printf("%d", a);
        }
        for (int k = 0; k < i - 1; k++)
        {
            int b = k * 2 + 1;
            printf("%d", b);
        }
        printf("\n");
    }
    return 0;
}