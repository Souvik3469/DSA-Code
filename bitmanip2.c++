#include <iostream>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}

int noofones(int n)
{
    int c = 0;
    while (n)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
}

void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    // cout << ispowerof2(16) << endl;
    // cout << noofones(19) << endl;
    subsets(arr, 4);
    return 0;
}