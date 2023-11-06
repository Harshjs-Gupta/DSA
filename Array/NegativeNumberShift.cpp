// write a program to Shift and arrenge negative and positive lements

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
};
void NegativeShift(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr->A[i], arr->A[j]);
        }
    }
}
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
int main()
{
    struct Array arr = {{-6, 3, -8, -9, 5, -7, 10, 12, -4, 2}, 10};

    NegativeShift(&arr);

    Display(arr);

    return 0;
}