// #136 write a program to reversing a string

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char A[] = "python";

    int length = strlen(A);
    int i, j = length - 1;

    for (i = 0; i < j; i++)
    {
        int temp;
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        j--;
    }
    cout << "Reversing of array is: " << A;

    return 0;
}

// write a progream to reversing a string

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char A[] = "Python";
//     char B[7] = " ";

//     int length = strlen(A);

//     int i, j = 0;

//     for (i = length - 1; i >= 0; i--)
//     {
//             B[j] = A[i];
//             j++;
//     }
//     cout << "Reversing of string is: "<<B;

//     return 0;
// }