// write a program to found a same key but in less time compare to privious run.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[10] = {8, 9, 4, 7, 6, 5, 3, 10, 14, 2};
//     int key;
//     cout << "Enetr the key: ";
//     cin >> key;
//     for (int i = 0; i < 10; i++)
//     {
//         if (key == arr[i])
//         {
//             swap(arr[i], arr[i - 1]);
//             cout << "Key are found successfully "
//                  << "\n"
//                  << "Key " << key << " is found at index " << i - 1;
//             exit(0);
//         }
//     }
//     cout << "Key is not found successfully";

//     return 0;
// }

// write a program to found a same key but in less time compare to privious run.

#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};
int Display(struct Array arr)
{
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
void swap(int *x, int *y)
{
    *x = *y - *x;
    *y = *x - *y;
    *x = *x + *y;
}
void LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(arr->A[i], arr->A[i - 1]);
            cout << "Key are found successfully "
                 << "\n"
                 << "Key " << key << " is found at index " << i - 1 << endl;
            return;
        }
    }
    cout << "Key is not found successfully";
}
int main()
{
    int key;
    struct Array arr = {{8, 9, 4, 7, 6, 10, 3, 5, 14, 2}, 10, 10};
    cout << "Enter the key: ";
    cin >> key;

    LinearSearch(&arr, key);
    Display(arr);
    return 0;
}