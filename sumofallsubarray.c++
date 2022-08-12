#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curr=0;
    for (int i = 0; i < n; i++)
    {
        curr=0;
        for (int j = i; j < n; j++)
        {
            curr+=a[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}
        