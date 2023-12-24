// write a program to check if an elements of an array is shorted or not

#include <iostream>
using namespace std;

struct Array
{
    int A[8];
    int length;
};
void shorted(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->length - 1; i++)
    {
        if (arr->A[i] > arr->A[i + 1])
        {
            cout << "Elements of array is not shorted ";
            return;
        }
    }
    cout << "Elements of an array is shorted";
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
    struct Array arr = {{4, 8, 13, 26, 20, 25, 28, 33}, 8};

    shorted(&arr);

    Display(arr);

    return 0;
}