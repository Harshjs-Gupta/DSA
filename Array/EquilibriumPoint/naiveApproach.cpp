#include <iostream>
using namespace std;

bool epoint(int arr[1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ls = 0, rs = 0;
        for (int j = 0; j < i; j++)
        {
            ls += arr[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            rs += arr[k];
        }
        if (ls == rs)
            return true;
    }
    return false;
}

int main()
{
    int arr[1000], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool res = epoint(arr, n);
    cout << res << endl;

    return 0;
}