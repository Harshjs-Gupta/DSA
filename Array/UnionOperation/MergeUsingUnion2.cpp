// write a program to Union Merge without shorted array

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
void CheckAndSetUnion(struct Array *arr)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr->lengthA)
    {
        arr->C[k] = arr->A[i];
        k++;
        i++;
    }
    while (j < arr->lengthB)
    {
        bool isDuplicate = false;
        
        for (int l = 0; l < k; l++)
        {
            if (arr->B[j] == arr->C[l])
            {
                isDuplicate = true;
                break;
            }
        }
        
        if (!isDuplicate)
        {
            arr->C[k] = arr->B[j];
            k++;
        }
        
        j++;
    }
}
void Display(struct Array arr)
{
    for (int k = 0; k < 10; k++)
    {
        cout << arr.C[k] << " ";
    }
}
int main()
{
    struct Array arr = {{3, 5, 10, 4, 6}, {12, 4, 7, 2, 5}, {0}, 5, 5};

    CheckAndSetUnion(&arr);

    Display(arr);

    return 0;
}