#include <iostream>
using namespace std;

int maxSum(int arr[1000], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int current = 0;
        for (int j = i; j < n; j++)
        {
            current = current + arr[j];
            res = max(res, current);
        }
    }
    return res;
}

int main()
{
    int arr[1000], n, res;
    cout << "Enter the number of elmenets-> ";
    cin >> n;
    cout << "Enter the elemenst-> ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    res = maxSum(arr, n);
    cout << "Maximum sum of sub array is-> " << res << endl;
    return 0;
}