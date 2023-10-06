// #124 write a program to find a duplicate element in an array and also count the duplicate elements

// #include <iostream>
// using namespace std;

// class Array
// {
// protected:
//     int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

// public:
//     void FindDuplicate()
//     {
//         for (int i = 0; i < 10; i++)
//         {
//             if (A[i] == A[i + 1])
//             {
//                 cout << "Duplicate elements is: " << A[i] << endl;
//             }
//         }
//     }
// };
// int main()
// {
//     Array arr;

//     arr.FindDuplicate();

//     return 0;
// }

// write a program to count duplicate element in an array and also count the duplicate elements

#include <iostream>
using namespace std;

class Array
{
protected:
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

public:
    void CountDuplicate()
    {
        int i, j;
        for (i = 0; i < 10 - 1; i++)
        {
            if (A[i] == A[i + 1])
            {
                j = i + 1;
                while (A[i] == A[j])
                {
                    j++;
                }
                cout << "Missing elements is: " << A[i] << "\t";
                cout << "Number of Duplicates: " << j - i << endl;
                i = j - 1;
            }
        }
    }
};
int main()
{
    Array arr;

    arr.CountDuplicate();

    return 0;
}