// # 132 write a program to find a lenght of a string

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char s[] = "Welcome";
//     int i;

//     for (i = 0; s[i] != '\0'; i++)
//     {
//     }
//     cout << "Length of the string is: " << i << endl;

//     return 0;
// }

// write a program to find a length of a string

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[10] = "Welcome";

    cout << "Length of string is: " << strlen(s) << endl;

    return 0;
}