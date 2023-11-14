// write a program to find a a Duplicates

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char A[] = "programming";

    int length = strlen(A);

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (A[i] == A[j])
            {
                cout << "There is " << A[i] << " Duplicate in this string at position "<<i <<" and "<<j<<endl;
            }
        }
    }

    return 0;
}