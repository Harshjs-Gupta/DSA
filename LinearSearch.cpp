// write a program to search a element of an array using linear search

#include <iostream>
using namespace std;

int main()
{
    int length, key;
    int A[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    cout << "Enter the key: ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (key == A[i])
        {
            cout << "Key are found successfully"<< "\n" << "Key " << key << " is found at Index " << i << endl;
            exit(0);
        }
    }
    cout<<"key is not found search is unsuccessful";

    return 0;
}