// write a program to search a key with binary search using lteraative statement

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
int Display(struct Array arr)
{
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
    return 0;
}
int BinarySearch(struct Array arr, int key)
{
    int mid, l, h;
    l = 0;
    h = 9;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            cout << "Key are found successfully "
                 << "\n"
                 << "Key " << key << " is found at index " << mid << endl;
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Key is not found search is unsuccessful \n";
    return -1;
}
int RBinSearch(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "Key are found successfully "
                 << "\n"
                 << "Key " << key << " is found at index " << mid << endl;
            return mid;
        }
        else if (key < a[mid])
        {
            return RBinSearch(a, l, mid - 1, key);
        }
        else
        {
            return RBinSearch(a, mid + 1, h, key);
        }
    }
}
int main()
{
    int key;
    struct Array arr = {{2, 6, 9, 11, 22, 31, 37, 49, 55, 54}, 10, 10};
    cout << "Enter the key: ";
    cin >> key;

    RBinSearch(arr.A, 0, 9, key);
    Display(arr);
    return 0;
}