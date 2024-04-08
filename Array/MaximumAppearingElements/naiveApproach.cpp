#include <iostream>
using namespace std;

int maxAppear(int left[], int right[], int n)
{
    int freq[100] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = left[i]; j <= right[i]; i++)
        {
            freq[j] += 1;
        }
    }
    int res = 0;
    for (int i = 1; i < 100; i++)
    {
        if (freq[i] > freq[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int left[1000], right[1000], n, res;
    cout << "Enter the number of elements for left array: ";
    cin >> n;
    cout << "Enter the left array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> left[i];
    }
    cout << "Enter the number of elements for right array: ";
    cin >> n;
    cout << "Enter the right array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> right[i];
    }
    res = maxAppear(left, right, n);
    cout << "The element that appears maximum times is : " << res;

    return 0;
}