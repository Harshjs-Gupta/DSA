// write a program in class to perform set membership operation

#include <iostream>
using namespace std;

class Array
{
protected:
    int A[10];
    int size = 10;
    int length = 10;

public:
    Array(int size, int length)
    {
        this->size = size;
        this->length = length;
    }
    void Append(int x)
    {
        if (length < size)
        {
            A[length++] = x;
        }
    }
    void Insert(int index, int x)
    {
        if (index >= 0 && index <= length)
        {
            for (int i = length; i > index; i--)
            {
                A[i] = A[i - 1];
            }
            A[index] = x;
            length++;
        }
    }
    void Delete(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Invalid index. Element not deleted." << endl;
            return;
        }

        for (int i = index; i < length - 1; ++i)
        {
            A[i] = A[i + 1];
        }

        length--;
    }
    int Search(int key)
    {
        int mid, l, h;
        l = 0;
        h = 9;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (key == A[mid])
            {
                cout << "Key are found successfully "
                     << "\n"
                     << "Key " << key << " is found at index " << mid << endl;
                return mid;
            }
            else if (key < A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << "Key is not found search is unsuccessful \n";
        return -1;
    }
    void Sum()
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += i;
        }
        cout << "Sum of array is: " << sum;
    }
    void Display()
    {

        cout << "Elements are: ";
        for (int i = 0; i < 10; i++)
        {
            cout << A[i] << " ";
        }
    }
};
int main()
{
    Array arr(10, 10);
    int choice;
    int index, x, key;
    do
    {
        cout << "\n1. Insert \n";
        cout << "2. Delete \n";
        cout << "3. Search \n";
        cout << "4. Sum \n";
        cout << "5. Display \n";
        cout << "6. Exit \n";

        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the index and element: ";
            cin >> index >> x;
            arr.Insert(index, x);
             arr.Display();
            break;
        case 2:
            cout << "Enter the elements: ";
            cin >> x;
            arr.Delete(x);
             arr.Display();
            break;
        case 3:
            cout << "Enter the key: ";
            cin >> key;
            arr.Search(key);
            break;
        case 4:
            arr.Sum();
            break;
        case 5:
            exit(0);
            break;
        }
    } while (choice < 6);

        return 0;
}