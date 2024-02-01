// write a program to solve stock buy and sell problem using efficient method

#include <iostream>
using namespace std;

int stockBuyAndSell(int arr[1000], int n)
{
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit = profit + (arr[i] - arr[i - 1]);
        }
    }
    cout << "Maximum profit is-> " << profit << endl;
}

int main()
{
    int arr[1000], n;
    cout << "Enter the number of element-> ";
    cin >> n;
    cout << "Enter the elements-> ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stockBuyAndSell(arr, n);
    return 0;
}