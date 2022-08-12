// O(n^3)

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//          for(int j=i;j<n;j++)
//          {
//              int sum=0;
//              for(int k=i;k<=j;k++)
//              {

//                 //  cout<<arr[k]<<"";
//                 sum+=arr[k];
//              }
//             //  cout<<endl;
//             maxsum=max(maxsum,sum);
//          }
//     }
//     cout<<maxsum<<endl;
//     return 0;
// }



// O(n^2)
// #include <iostream>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int maxsum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int currsum[n + 1];
//     currsum[0] = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         currsum[i] = currsum[i - 1] + arr[i - 1];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = currsum[i] - currsum[j];
//             maxsum = max(sum, maxsum);
//         }
//     }
//     cout << maxsum << endl;
// }



// O(n)

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(currsum, maxsum);
    }
    cout << maxsum << endl;
}