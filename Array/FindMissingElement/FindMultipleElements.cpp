    // #123 write a program to find a missing elements in an unshorted array

// #include <iostream>
// using namespace std;

// class Array
// {
// protected:
//     int A[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
//     int length;

// public:
//     Array(int Length)
//     {
//         length = Length;
//     }
//     void FindMultipleElements()
//     {
//         int diff;
//         diff = 6 - 0;
//         for (int i = 0; i < length; i++)
//         {
//             if (A[i] - i != diff)
//             {
//                 while (diff < A[i] - i)
//                 {
//                     cout << "Missing elements is: " << i + diff<<endl;
//                     diff++;
//                 }
//             }
//         }
//     }
// };
// int main()
// {
//     Array arr(11);

//     arr.FindMultipleElements();

//     return 0;
// }






// write a prgram to find mutiple elements in an unshorted array

#include <iostream>
using namespace std;

class Array
{
protected:
    int A[10]={3,7,4,9,12,6,1,11,2,10};
    int H[12]={0};

public:
    void FindMultipleElements()
    {
        int l = 1;
        int h = 12;
        for (int i = 0; i < 10; i++)
        {
            H[A[i]]++;
        }
        for (int i = l; i <= h; i++)
        {
            if (H[i] == 0)
            {
                cout << "Missing elements is: " << i << endl;
            }
        }
    }
};
int main()
{
    Array arr;

    arr.FindMultipleElements();

    return 0;
}