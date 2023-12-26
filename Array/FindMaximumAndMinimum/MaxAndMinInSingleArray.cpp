// write a program to find maximum and minimum in an single array

#include <iostream>
using namespace std;

class Array
{
protected:
    int A[10] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};

public:
    int FindMaxAndMin()
    {
        int max, min;
        max = A[0];
        min = A[0];
        for (int i = 0; i < 10; i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
            if (A[i] < min)
            {
                min = A[i];
            }
        }
        cout << "Maximum is: " << max << " "
             << "Minimum is: " << min << endl;
    }
};
int main()
{
    Array arr;
    arr.FindMaxAndMin();

    return 0;
}