#include <iostream>
using namespace std;

int maxAppear(int left[1000], int right[1000], int n)
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
    int left[1000], right[1000], n, res;
    res = maxAppear([ 1, 2, 4 ], [ 4, 5, 7 ], 3);
    cout << "The element that appears maximum times is : " << res;

    return 0;
}