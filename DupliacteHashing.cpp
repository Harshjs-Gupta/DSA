// #125 write a program to find Duplicate elements in shorted array using hashing method

// #include <iostream>
// using namespace std;

// class Array
// {
// protected:
//     int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
//     int H[20] = {0};

// public:
//     void FindDuplicate()
//     {
//         int l = 3;
//         int h = 20;
//         for (int i = 0; i < 10; i++)
//         {
//             H[A[i]]++;
//         }
//         for (int i = l; i < h; i++)
//         {
//             if (H[i] > 1)
//             {
//                 cout << "Duplicate elements is: " << i << endl;
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



// #126 write a program to find Duplicate elements in unshorted array using hashing method

#include <iostream>
using namespace std;

class Array
{
protected:
    int A[10] = {8,3,6,4,6,5,6,8,2,7};
    int H[8] = {0};

public:
    void FindDuplicate()
    {
        int l = 2;
        int h = 8;
        for (int i = 0; i < 10; i++)
        {
            H[A[i]]++;
        }
        for (int i = l; i <= h; i++)
        {
            if (H[i] > 1)
            {
                cout << "Duplicate elements is: " << i << endl;
            }
        }
        
    }
};
int main()
{
    Array arr;

    arr.FindDuplicate();

    return 0;
}