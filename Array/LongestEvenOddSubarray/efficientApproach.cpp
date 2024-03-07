#include <iostream>
using namespace std;

int maxEvenOdd(int arr[1000], int n)
{
    int res = 1, current = 1;
    ;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            current++;
            res = max(res, current);
        }
        else
        {
            current = 1;
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
    res = maxEvenOdd(arr, n);
    cout << "Maximum lenght of even odd sub array is-> " << res << endl;
    return 0;
}