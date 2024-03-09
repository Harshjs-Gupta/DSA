#include <iostream>
using namespace std;

int printGroup(int arr[1000], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " to ";
            }
            else
            {
                cout << (i - 1) << endl;
            }
        }
    }
    if (arr[n - 1] != arr[0])
    {
        cout << (n - 1) << endl;
    }
}

int main()
{
    int arr[1000], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printGroup(arr, n);
    return 0;
}