#include <stdio.h>
#define MAX 10;
int main()
{
    int m, n, sum = 0;
    int a[10][10];
    int b[10][10];
    int result[10][10];
    int r1, c1, r2, c2;
    printf("Enter r1 ");
    scanf("%d", &r1);
    printf("Enter c1 ");
    scanf("%d", &c1);
    printf("Enter r2 ");
    scanf("%d", &r2);
    printf("Enter c2 ");
    scanf("%d", &c2);
    // int a[r1][c1], b[r2][c2], result[r1][c2];
    printf("Enter your first matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
         printf("\n");
    }
    printf("Enter your second matrix\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    if (r2 != c1)
    {
        printf("Multiplication not possible");
        exit(1);
    }
    else
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            { 
                for (int k = 0; k < r2; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        { 
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}