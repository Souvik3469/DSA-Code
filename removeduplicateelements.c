#include <stdio.h>

int main()
{
    int arr[20], i, j, k, n;
    printf(" No. of elements ");
    scanf(" %d", &n);

    printf("  Enter elements of an array", n);

    for (i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    for (i = 0; i < n; i++) // 1 2 2 4 5 6 6
    {
        for (j = i + 1; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}