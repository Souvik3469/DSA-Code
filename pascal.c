#include<stdio.h>
int fact(int n)
{
    int fac=1;
    for(int i=2;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}
int main()
{

    int n,i,j,k;
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            int coeff=(fact(i))/(fact(i-j)*fact(j));
            printf("%3d",coeff);
        }
        printf("\n");
    }
    return 0;
}