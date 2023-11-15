// #135 write a program to check the  a string is valid or not

#include <iostream>
using namespace std;

int main()
{
    char name[] = "Anil321";

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 'a' && name[i] <= 'z') && !(name[i] >= 'A' && name[i] <= 'Z') && !(name[i] >= 48 && name[i] <= 57) )
        {
            cout << "String is invalid" << endl;
            return 0;
            
        }
    }
    cout<<"String is valid"<<endl;

    return 0;
}