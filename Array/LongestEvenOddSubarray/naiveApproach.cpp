#include <iostream>
using namespace std;

int maxEvenOdd(int arr[1000], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int current = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
            {
                current++;
            }
            else
            {
                break;
            }
        }
        res = max(res, current);
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