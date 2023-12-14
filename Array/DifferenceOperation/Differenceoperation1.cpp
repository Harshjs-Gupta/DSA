// write a program to perform a difference operation but in unshorted list.

#include <iostream>
using namespace std;

struct Array
{
    int A[5];
    int B[5];
    int C[10];
    int lengthA;
    int lengthB;
};
void Difference(struct Array *arr)
{
    int k = 0;
    for (int i = 0; i < arr->lengthA; i++)
    {
        for (int j = 0; j < arr->lengthB; j++)
        {
            if (arr->A[i] != arr->B[j])
            {
                arr->C[k] = arr->A[i];
                k++;
                i++;
                break;
            }
        }
    }
    cout << "The difference of two array is: ";
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
    struct Array arr = {{3, 5, 10, 4, 6}, {12, 4, 7, 2, 5}, {0}, 5, 5};

    Difference(&arr);

    Display(arr);

    return 0;
}