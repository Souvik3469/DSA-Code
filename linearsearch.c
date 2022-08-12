#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[100];
    int n,num,i;
    printf("Enter number");
    scanf("%d", &num);
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(num==arr[i])
        printf("Found at %d index",i);;
    }
    
}