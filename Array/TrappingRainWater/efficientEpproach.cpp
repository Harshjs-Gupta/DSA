// write a code for find the uiunits of water stored in blocks of array

#include <iostream>
using namespace std;

int trappingRainWater(int arr[1000], int n)
{
    int leftMax[n], rightMax[n];
    int units = 0;
    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }
    rightMax[n - 1] = arr[n - 1];
    for (int j = n - 2; j >= 0; j--)
    {
        rightMax[j] = max(rightMax[j + 1], arr[j]);
    }
    for (int i = 0; i < n; i++)
    {
        units = units + (min(leftMax[i], rightMax[i])) - arr[i];
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