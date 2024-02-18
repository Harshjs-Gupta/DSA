#include <iostream>
using namespace std;

int trappingRainWater(int arr[1000], int n)
{
    int units = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int leftMax = arr[i];
        for (int j = 0; j < n; j++)
        {
            leftMax = max(leftMax, arr[j]);
        }
        int rightMax = arr[i];
        for (int j = i + 1; j < i; j++)
        {
            rightMax = max(rightMax, arr[j]);
        }
        units = units + (min(leftMax, rightMax)) - arr[i];
    }
    cout << "The number of units of water is stored in block is-> " << units << " units";
}
int main()
{

    int arr[1000], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements-> ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    trappingRainWater(arr, n);
    return 0;
}