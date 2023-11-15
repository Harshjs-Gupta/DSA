// write a program to change lowercase to uppercase and uppercase to lowercase

#include <iostream>
using namespace std;

int main()
{
    char A[10] = "wElCome";

    for (int i = 0; i < 10; i++)
    {
        if (A[i] >= 'A' && A[i] <= 'Z')
        {
            A[i] = A[i] + 32;
        }
        else if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] = A[i] - 32;
        }
    }
    cout << "Toggle of String is: " << A << endl;

    return 0;
}