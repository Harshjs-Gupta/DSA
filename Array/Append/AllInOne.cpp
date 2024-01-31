// write a program to make a all in one function in one

#include <iostream>
using namespace std;

struct Array
{
    int A[5];
    int C[10];
    int length;
    int lengthB;
};
void Append(struct Array *arr, int x)
{
    if (arr->length < 5)
    {
        arr->A[arr->length++] = x;
    }
}
void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
void Delete(struct Array *arr, int index)
{
    if (index < 0 || index >= arr->length)
    {
        cout << "Invalid index. Element not deleted." << endl;
        return;
    }

    for (int i = index; i < arr->length - 1; ++i)
    {
        arr->A[i] = arr->A[i + 1];
    }

    arr->length--;
}       
int LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            cout << "Key " << key << " is found at index " << i << endl;
            return 0;
        }
    }
    cout << "key " << key << " is not found at any index" << endl;
}
int BinarySearch(struct Array *arr, int key)
{
    int l, h, mid;
    l = 0, h = 4;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr->A[mid])
        {
            cout << "Key " << key << " is found at index " << mid << endl;
            return mid;
        }
        else if (key < arr->A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Key " << key << " is not found at any index" << endl;
    return -1;
}
int Get(struct Array *arr, int index)
{
    if (index >= 0 && index < 5)
    {
        cout<< arr->A[index];
    }
    return -1;
}

int Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < 5)
    {
        for (int i = 4; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
void Sum(struct Array *arr)
{
    int sum = 0;
    for (int i = 0; i < arr->A[i]; i++)
    {
        sum += arr->A[i];
    }
    cout << "The sum of the array elements is: " << sum << endl;
}
void Average(struct Array *arr)
{
    int sum = 0;
    for (int i = 0; i < arr->A[i]; i++)
    {
        sum += arr->A[i];
    }
    cout << "The average of the array elements is: " << sum / 5 << endl;
}
void Maximum(struct Array *arr)
{
    int max;
    max = arr->A[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr->A[i] > max)
        {
            max = arr->A[i];
        }
    }
    cout << "Maximum is: " << max << endl;
}
void Minimum(struct Array *arr)
{
    int min;
    min = arr->A[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr->A[i] < min)
        {
            min = arr->A[i];
        }
    }
    cout << "Minimum is: " << min << endl;
}
void Reverse(struct Array *arr)
{
    int i, j = 4;
    for (i = 0; i < j; i++)
    {
        int temp;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
        j--;
    }
    for (i = 0; i < 5; i++)
    {
        cout << arr->A[i] << " ";
    }
}
void LeftShift(struct Array *arr)
{
    int temp = arr->A[0];
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i - 1] = arr->A[i];
    }
    arr->A[4] = temp;
}
void RightShift(struct Array *arr)
{
    int temp = arr->A[4];
    for (int i = arr->length; i >= 0; i--)
    {
        arr->A[i + 1] = arr->A[i];
    }
    arr->A[0] = temp;
}
void IsShorted(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i - 1] < arr->A[i])
        {
            cout << "The elements  of array is shorted" << endl;
            return;
        }
    }
    cout << "The elements of the array is not shorted" << endl;
}
void Merging(struct Array *arr)
{
    int B[5] = {4, 10, 12, 22, 23};
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr->length && j < arr->lengthB)
    {
        if (arr->A[i] < B[j])
        {
            arr->C[k] = arr->A[i];
            k++;
            i++;
        }
        else
        {
            arr->C[k] = B[j];
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
        arr->C[k] = B[j];
        k++;
    }
    cout << "Elements after merging: ";
}
void UnionMerge(struct Array *arr)
{
    int B[5] = {12, 4, 7, 2, 5};
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr->length)
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
            if (B[j] == arr->C[l])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            arr->C[k] = B[j];
            k++;
        }

        j++;
    }
    cout << "Elements after union merging: ";
}
void IntersectionMerge(struct Array *arr)
{
    int B[5] = {2, 4, 5, 7, 12};
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr->length && j < arr->lengthB)
    {
        if (arr->A[i] == B[j])
        {
            arr->C[k] = arr->A[i];
            k++;
            i++;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    cout << "Elements after  intersection merging: ";
}
void DifferenceMerge(struct Array *arr)
{
    int B[5] = {2, 4, 5, 7, 12};
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr->length && j < arr->lengthB)
    {
        if (arr->A[i] != B[j])
        {
            arr->C[k] = arr->A[i];
            k++;
            i++;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    cout << "Elements after difference Merge";
}
void DisplayA(struct Array arr)
{
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        cout << arr.A[i] << " ";
    }
}
void DisplayC(struct Array arr)
{
    int C[10];
    for (int k = 0; k < 10; k++)
    {
        cout << arr.C[k] << " ";
    }
}
int main()
{

    struct Array arr = {{0}, {0}, 5, 5};
    int choice, index, x, key;

    do
    {
        cout << "\n-----MENU-----\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Linear Search\n";
        cout << "4. Binary search\n";
        cout << "5. Get\n";
        cout << "6. Set\n";
        cout << "7. Sum\n";
        cout << "8. Average\n";
        cout << "9. Maximum\n";
        cout << "10. Minimum\n";
        cout << "11. Reverse\n";
        cout << "12. Left shift\n";
        cout << "13. Right shift \n";
        cout << "14. Check shorted\n";
        cout << "15. Merging\n";
        cout << "16. Union Merge\n";
        cout << "17. Intersection Merge\n";
        cout << "18. Difference Merge\n";
        cout << "19. Exit\n";
        cout << "Enter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the index and element: ";
            cin >> index >> x;
            Insert(&arr, index, x);
            DisplayA(arr);
            break;
        case 2:
            cout << "Enter the index: ";
            cin >> index;
            Delete(&arr, index);
            DisplayA(arr);
            break;
        case 3:
            cout << "Enter the key: ";
            cin >> key;
            LinearSearch(&arr, key);
            DisplayA(arr);
            break;
        case 4:
            cout << "Enter the key: ";
            cin >> key;
            BinarySearch(&arr, key);
            DisplayA(arr);
            break;
        case 5:
            cout << "Enter the index: ";
            cin >> index;
            Get(&arr, index);
            break;
        case 6:
            cout << "Enter the index and element: ";
            cin >> index >> x;
            Set(&arr, index, x);
            DisplayA(arr);
            break;
        case 7:
            Sum(&arr);
            DisplayA(arr);
            break;
        case 8:
            Average(&arr);
            DisplayA(arr);
            break;
        case 9:
            Maximum(&arr);
            DisplayA(arr);
            break;
        case 10:
            Minimum(&arr);
            DisplayA(arr);
            break;
        case 11:
            Reverse(&arr);
            break;
        case 12:
            cout << "After Left shift: ";
            LeftShift(&arr);
            DisplayA(arr);
            break;
        case 13:
            cout << "After Right shift: ";
            RightShift(&arr);
            DisplayA(arr);
            break;
        case 14:
            IsShorted(&arr);
            DisplayA(arr);
            break;
        case 15:
            Merging(&arr);
            DisplayC(arr);
            break;
        case 16:
            UnionMerge(&arr);
            DisplayC(arr);
            break;
        case 17:
            IntersectionMerge(&arr);
            DisplayC(arr);
            break;
        case 18:
            DifferenceMerge(&arr);
            DisplayC(arr);
            break;
        case 19:
            exit(0);
            break;
        }

    } while (choice < 21);

    return 0;
}