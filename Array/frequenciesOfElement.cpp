// write a program to count the frequencies of element

#include <iostream>
using namespace std;

int FrequenciesOfArray(int arr[1000], int n)
{
    for (int i = 0; i < n; i++)
    {
         int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        if (arr[i] != -1)
        {
            cout << "The element " << arr[i] << " is repited " << count << " times" << endl;
        }
    }
}

int main()
{
    int arr[1000], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    FrequenciesOfArray(arr, n);
    return 0;
}