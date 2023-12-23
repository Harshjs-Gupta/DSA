            // write a program to merge an elements of an array

#include <iostream>
using namespace std;

struct Array
{
    int A[5];
    int B[5];
    int C[10];
    int length;
    int lengthB;
};
void Merging(struct Array *arr)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr->length && j < arr->lengthB)
    {
        if (arr->A[i] < arr->B[j])
        {
            arr->C[k] = arr->A[i];
            k++;
            i++;
        }
        else
        {
            arr->C[k] = arr->B[j];
            k++;
            j++;
        }
    }
    for (; i < arr->length; i++)
    {
        arr->C[k] = arr->A[i];
        k++;
    }
    for (; j < arr->lengthB; j++)
    {
        arr->C[k] = arr->B[j];
        k++;
    }
    cout << "Elements after merging: ";
}
void Display(struct Array arr)
{
    int C[10];
    for (int k = 0; k < 10; k++)
    {
        cout << arr.C[k] << " ";
    }
}
int main()
{
    struct Array arr = {{3, 8, 16, 20, 25}, {4, 10, 12, 22, 23}, {0}, 5, 5};

    Merging(&arr);

    Display(arr);

    return 0;
}
