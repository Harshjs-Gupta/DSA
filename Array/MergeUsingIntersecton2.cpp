// write a program to mergeing intersection

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
void Intersection(struct Array *arr)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr->lengthA && j < arr->lengthB)
    {
        if (arr->A[i] == arr->B[j])
        {
            arr->C[k] = arr->A[i];
            k++;
            i++;
            j++;
        }
        else
        {
            k++;
            i++;
            j++;
        }
    }
    cout << "Aftetr performing intersection operation: ";
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
    struct Array arr = {{3, 4, 5, 6, 10}, {2, 4, 5, 7, 12}, {0}, 5, 5};

    Intersection(&arr);

    Display(arr);

    return 0;
}