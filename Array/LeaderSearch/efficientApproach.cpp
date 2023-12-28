// write a program to find the leaders in an array

#include <iostream>
using namespace std;

void Leader(int arr[1000], int n)
{
    int current_leader = arr[n - 1];
    cout << current_leader << " ";
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= current_leader)
        {
            current_leader = arr[i];
            cout << current_leader << " ";
        }
    }
}

int main()
{
   int arr[1000],n;
   cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Leader(arr, n);

    return 0;
}