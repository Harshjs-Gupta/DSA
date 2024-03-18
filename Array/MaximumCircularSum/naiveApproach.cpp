#include <iostream>
using namespace std;

int maxCircularSum(int arr[1000], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            curr_sum += arr[index];
            curr_max = max(curr_max, curr_sum);
        }
        res = max(res, curr_max);
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