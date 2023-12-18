// #127 write a program to find a pair of elements

// #include <iostream>
// using namespace std;

// class Array
// {
// protected:
//     int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 16};

// public:
//     void FindPair(int k)
//     {
//         int i, j;
//         for (i = 0; i < 10; i++)
//         {
//             for (j = i + 1; j < 10; j++)
//             {
//                 if (A[i] + A[j] == k)
//                 {
//                     cout << "Pair of elements: " << A[i] << " + " << A[j] << " = " << k << endl;
//                 }
//             }
//         }
//     }
// };
// int main()
// {
//     Array arr;
//     int k;
//     cout << "Enter the number: ";
//     cin >> k;
//     arr.FindPair(k);

//     return 0;
// }

// #127 write a program to find a pair of elements usig hashing

#include <iostream>
using namespace std;

class Array
{
protected:
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 16};
    int H[16] = {0};

public:
    void FindPair(int k)
    {
        int i, j;
        int l = 2;
        int h = 16;
        for (i = 0; i < 10; i++)
        {
            if (H[k - A[i]] != 0)
            {
                cout << "Pair of elements: " << A[i] << " + " << k - A[i] << " = " << k << endl;
            }
            H[A[i]]++;
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