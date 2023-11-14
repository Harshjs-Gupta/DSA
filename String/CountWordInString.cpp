// #134 write a program to count word in a string

#include <iostream>
using namespace std;

int main()
{
    char A[] = "How are you";
    int word = 0;

    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << "Number of word is: " << word + 1 << endl;

    return 0;
}