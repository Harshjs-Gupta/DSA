// write a program to move the element from their original index to first index for taking less time when user enter same key for search

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
void Display(struct Array arr)
{
    cout << "Elements is: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(arr->A[i], arr->A[0]);
            cout << "Key are found successfully "
                 << "\n"
                 << "Key " << key << " is found at index " << i << endl;

            return 0;
        }
    }
    cout << "Key are not found search is Unsuccessfull"<<"\n";
    return -1;
}
int main()
{
    int key;
    struct Array arr = {{8, 9, 4, 7, 6, 10, 3, 5, 14, 2}, 10, 10};
    cout << "Enter the key: ";
    cin >> key;
    LinearSearch(&arr, key);
    Display(arr);

    return 0;
}