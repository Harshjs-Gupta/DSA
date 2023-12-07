// write a program to left rotate by d place

#include <iostream>
using namespace std;

int LeftRotateByD(int arr[1000], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}
int main()
{
    int arr[1000], n, d;
    cout << "Enter the number of element: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of elements to be shift: ";
    cin >> d;
    LeftRotateByD(arr, n, d);

    cout << "Array after left rotation by " << d << " positions: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}