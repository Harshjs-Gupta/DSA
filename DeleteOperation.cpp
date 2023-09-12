// write a progrma to delete an element from a list of array

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i];
    }
}
int Delete(struct Array *arr, int x)
{
    int index;
    x=arr->A[index];
    for(int i=index;i<arr->length;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6, 7, 8, 9, 10, 1}, 10, 10};

    Delete(&arr, 5);
    Display(arr);

    return 0;
}