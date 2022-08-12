#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[100];
    int n, num, i,index;
    printf("Enter number ");
    scanf("%d", &num);
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        printf("Low %d High %d\n",low,high);
        int mid = (low + high) / 2;
       
        if (num == arr[mid])
        {
            index=mid;
            printf("Present\n");
            break;
        }
        else if (num < arr[mid])
        {

            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }
    printf("Index: %d",index);
    return 0;
}