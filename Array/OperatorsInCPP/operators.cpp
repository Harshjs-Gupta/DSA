// write a code for some operators

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
int Get(struct Array arr, int index)
{
    if (index >= 0 && index <= 9)
    {
        cout << "At index " << index << " elements is " << arr.A[index] << "\n";
    }
    return -1;
}
int Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= 9)
    {
        arr->A[index] = x;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr->A[i] << " ";
    }
}
int Max(struct Array arr)
{
    int max;
    max = arr.A[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
            cout << max;
        }
    }
}
int Min(struct Array arr)
{
    int min;
    min = arr.A[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    cout << min;
}
int Sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr.A[i];
    }
    cout << sum;
}
float Average(struct Array arr)
{
    float total = 0;
    for (int i = 0; i < 10; i++)
    {
        total = total + arr.A[i];
    }
    cout << "Average is: " << total / arr.length;
}
int main()
{
    struct Array arr = {{8, 3, 9, 15, 6, 10, 7, 2, 12, 4}, 10, 10};
    // Get(arr, 7);
    // Set(&arr, 7, 22);
    // Max(arr);
    // Min(arr);
    // Sum(arr);
    Average(arr);

    return 0;
}