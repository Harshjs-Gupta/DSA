// write a program to left shift the elements of an array

#include <iostream>
using namespace std;

struct Array
{
    int A[5];
    int length;
};
void LeftShift(struct Array *arr)
{
    int i, temp = arr->A[0];
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    arr->A[arr->length - 1] = temp;
    cout << "Elements after Left shift: ";
    for (i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << " ";
    }
}
int main()
{
    struct Array arr = {{5, 9, 4, 6, 7}, 5};

    LeftShift(&arr);
    return 0;
}
