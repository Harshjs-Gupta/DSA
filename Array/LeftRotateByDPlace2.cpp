// write a program to left rotate by D place
// Method 2

#include <iostream>
using namespace std;

void LeftRotate(int arr[1000], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

int main()
{
    int arr[1000], n, d;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number of elements you wanrt to rotate: ";
    cin >> d;
    cout<<"\n";
    LeftRotate(arr, n, d);
    cout << "Array after left rotation by " << d << " positions: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}