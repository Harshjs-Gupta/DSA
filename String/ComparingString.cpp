// #137 write a program to compare a string is eual or not

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char A[] = "Painter";
    char B[] = "Painting";

    int length = strlen(A);

    int i, j = 0;
    for (i = 0; i < length; i++)
    {
        if (A[i] != B[j])
        {
            cout << "Both string are different";
            return 0;
        }
        j++;
    }
    cout << "Both string are same";

    return 0;
}