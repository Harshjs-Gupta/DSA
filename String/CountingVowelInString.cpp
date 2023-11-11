// #134 write a program to count a vowel in a string

#include <iostream>
using namespace std;

int main()
{
    char A[] = "How are you";

    int vowel = 0;
    int consonant = 0;
    int space = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'u' || A[i] == 'U')
        {
            vowel++;
        }
        else if ((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z'))
        {
            consonant++;
        }
        else if(A[i] == ' ')
        {
            space++;
        }
    }
    cout << "Vowel is: " << vowel << endl;
    cout << "Consonant is: " << consonant << endl;
    cout << "Space is: " << space << endl;

    return 0;
}