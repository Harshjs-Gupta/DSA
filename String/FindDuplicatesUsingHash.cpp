// write a program to find duplicates in a string using hash method

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char A[] = "programming ";
    int H[26] = {0};
    int length = strlen(A);

    for (int i = 0; i < length; i++)
    {
        H[A[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << "Character " << char(i + 97) << " has " << H[i] << " duplicates." << endl;
        }
    }

    return 0;
}