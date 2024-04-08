#include <iostream>
using namespace std;

int prefixSum(int arr[1000], int n, int startingIndex, int endingIndex)
{
    int res = 0;
    for (int i = startingIndex; i < endingIndex + 1; i++)
    {
        res += arr[i];
    }
    return res;
}
int main()
{
    int arr[1000], startingIndex, endingIndex, n, res;
    cout << "Enter the number of elements  in array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter starting index then ending index-> ";
    cin >> startingIndex >> endingIndex;

    res = prefixSum(arr, n, startingIndex, endingIndex);
    cout << "Prefix sum is-> " << res << endl;
    return 0;
}