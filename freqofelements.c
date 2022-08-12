#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a[100],f[100];
    int n, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
         f[i]=-1;
    }
    for (int i = 0; i < n; i++)
    {
        c = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=c;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(f[i]!=0)
        {
            printf("%d occurs %d times\n",a[i],f[i]);
        }
    }
}