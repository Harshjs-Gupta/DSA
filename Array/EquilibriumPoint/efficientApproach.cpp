#include <iostream>
using namespace std;

bool epoint(int arr[1000], int n)
{
    int rs = 0;
    for (int i = 0; i < n; i++)
    {
        rs += arr[i];
    }
    int ls = 0;
    for (int i = 0; i < n; i++)
    {
        rs -= arr[i];
        if (ls == rs)
        {
            return true;
        }
        ls += arr[i];
    }
    return false;
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
    res = epoint(arr, n);
    cout << res << endl;
    return 0;
}