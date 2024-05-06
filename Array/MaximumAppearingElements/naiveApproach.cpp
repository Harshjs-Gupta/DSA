#include <iostream>
using namespace std;

int maxAppear(int left[], int right[], int n)
{
    int freq[100] = {0};
    for (int i = 0; i < n; i++)
        for (int j = left[i]; j <= right[i]; i++)
            freq[j] += 1;
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
    int left[1000], right[1000], res;
    int n = sizeof(left) / sizeof(left[0]);
    res = maxAppear({1, 2, 4}, {4, 5, 7}, n);
    cout << "The element that appears maximum times is : " << res;

    return 0;
}