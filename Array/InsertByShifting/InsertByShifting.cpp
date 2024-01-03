// write a program to insert a number in an elements of an array which is shorted

#include <iostream>
using namespace std;

struct Array
{
    int A[9];
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i] << " ";
    }
}
void InsertShift(struct Array *arr, int x)
{
    int i;
    i = arr->length - 1;
    while (arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
    cout<<"Elements after insertion: ";
}
int main()
{
    struct Array arr = {{4, 8, 13, 16, 20, 25, 28, 33}, 8};

    InsertShift(&arr, 18);

    Display(arr);

    return 0;
}