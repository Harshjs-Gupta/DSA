// #128 write a program to find a Pair of elements and there sum is equal to the entered number and array is shorted

#include <iostream>
using namespace std;

class Array
{
protected:
    int A[10] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};

public:
    void FindPair(int k)
    {
        int i = 0, j = 10 - 1;
        while (i < j)
        {
            if (A[i] + A[j] == k)
            {
                cout << "Pair of elements: " << A[i] << " + " << A[j] << " = " << k << endl;
                i++;
                j++;
            }
            else if (A[i] + A[j] < k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
};
int main()
{
    Array arr;
    int k;
    cout << "Enter the number: ";
    cin >> k;
    arr.FindPair(k);

    return 0;
}