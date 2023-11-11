// #137 write a program to check a string is palindrome or not

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char A[] = "madam";
    char B[10] = " ";

    int length = strlen(A);
    int i, j = 0;

    for (i = length - 1; i >= 0; i--)
    {
        B[j] = A[i];
        j++;
    }
    cout << "Reversing of string is: " << B << endl;

    for (int i = 0, j = length - 1; i < length, j >= 0; i++,j--)
    {
        if (A[i] != A[j])
        {
            cout << "The string is not a palindrome" << endl;
            return 0;
        }
    }
    cout << "The string is a palindrome" << endl;

    return 0;
}