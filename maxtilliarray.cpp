// Arrays Challenge (Max till i)

// Problem:
// Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).

// Approach:
// 1. Keep a variable mx which stores the maximum till i

// th element.

// 2. Iterate over the array and update,

// mx = max(mx, a[i])
#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
return 0;
}