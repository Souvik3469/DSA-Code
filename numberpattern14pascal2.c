#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    //    clrscr();
int fac(int n)
{
    int fact=1;
    for (int i = 2; i <=n; i++)
    {
        fact*=i;
    }
    
    return fact;
}
int main()
{
    int n=5;

    for (int i = 0; i < n; i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            int coef=(fac(i))/(fac (j)*fac(i-j));
            printf("%3d ", coef);
        }
        printf("\n");
    }
}