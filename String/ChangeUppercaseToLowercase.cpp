// #133 write a program to change uppercase to lowercase letter of string

#include <iostream>
using namespace std;

int main()
{
    char A[8] = "WELCOME";
    for (int i = 0; i < 8; i++)
    {
            A[i] = A[i] + 32;
    }
    cout << "Lowercase is: " << A << endl;

    return 0;
}