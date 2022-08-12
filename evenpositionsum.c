// #include <stdio.h>
// #define MAX_SIZE 100
// int sum(int arr[],int n,int flag);
// int main()
// {
//     int arr[MAX_SIZE];
//     int i, n, flag;

//     /* Input size and element in array */
//     printf("Enter size of the array : ");
//     scanf("%d", &n);
//     printf("Enter elements in array : ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     /* Input element position to delete */
//     // printf("Enter the element position to delete : ");
//     // scanf("%d", &pos);
//     scanf("%d",&flag);
// }
//     int sum(int arr[],int n,int flag)
//     {
//         int i;
//         int sum=0;
//         if(flag==0)
//         {
//             for(i=0;i<n;i++)
//             {
//                 if(i%2==0)
//                 {
//                     sum+=arr[i];
//                 }
//             }
//         }
//         else{

//         }
//     }

#include <stdio.h>
// #define MAX_SIZE 100
int main()
{
    int arr[100];
    int i, n, flag;
    printf("Enter number  of elements the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the flag options");
    scanf("%d", &flag);
    int sume = 0;
    int sumo = 0;

    for (int i = 0; i < n;  i++)
    {
        if (i % 2 == 0)
        {
            sume = sume + arr[i];
        }
        else
        {
            sumo = sumo + arr[i];
        }
    }

    if (flag == 0)
    {
        printf("%d", sume);
    }
    else
    {
        printf("%d", sumo);
    }
    return 0;
}
