#include <iostream>
#include <climits>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    int res = INT_MIN;
    for (int i = 0; i + k - 1 < n; i++)
    {
        int curr = 0;
        for (int j = 0; j < k; j++)
        {
            curr += arr[i + j];
        }
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int arr[1000], n, res, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number k: ";
    cin >> k;
    res = maxSum(arr, n, k);
    cout << "The maximum sum is : " << res << endl;

    return 0;
}