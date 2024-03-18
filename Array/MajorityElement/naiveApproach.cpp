#include <iostream>
using namespace std;

int majorityElement(int arr[1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > (n / 2))
            return arr[i];
    }
    return -1;
}

int main()
{
    int arr[1000], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elemnets: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Majority elements at index: ";
    cout << majorityElement(arr, n);

    return 0;
}