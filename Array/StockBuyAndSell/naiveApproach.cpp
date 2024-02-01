// write a program to find the maximum profit in stock buy and sell

#include <iostream>
using namespace std;

int stockBuyAndSell(int arr[1000], int n)
{
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                profit = profit + (arr[j] - arr[i]);
                break;
            }
            else
            {
                i++;
            }
        }
    }
    cout << "Maximum profit is-> " << profit << endl;
}

int main()
{
    int arr[1000], n;
    cout << "Enter the number of elements-> ";
    cin >> n;
    cout << "Enter the elements-> ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stockBuyAndSell(arr, n);
    return 0;
}