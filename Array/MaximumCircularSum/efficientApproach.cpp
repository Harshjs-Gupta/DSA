#include <iostream>
using namespace std;

int maxCircularSum(int arr[1000], int n)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main()
{
    int arr[1000], n, res;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    res = maxCircularSum(arr, n);
    cout << "Maximum circular sum is-> " << res << endl;

    return 0;
}