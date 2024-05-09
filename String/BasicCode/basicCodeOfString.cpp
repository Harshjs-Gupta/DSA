// #include <iostream>
// using namespace std;

// int main()
// {
//     char str[] = "gfg";
//     cout << sizeof(str) << endl;
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char str1[] = "ghi";
//     char str2[] = "def";
//     int res = strcmp(str1, str2);
//     if (res > 0)
//     {
//         cout << " Greater" << endl;
//     }
//     else if (res == 0)
//     {
//         cout << " Same" << endl;
//     }
//     else
//     {
//         cout << "Smaller" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char str[5];
//     strcpy(str, "gfg");
//     cout << str << endl;
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     string str = "geeksforgeeks";
//     cout << str.length() << " " << endl;
//     str += "xyz";
//     cout << str << " " << endl;
//     cout << str.substr(1, 3) << " " << endl;
//     cout << str.find("eek") << " " << endl;

//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter the string : ";
//     getline(cin, str); // This getline is use for reading a string with space
//     cout << "The string is : " << str << endl;
//     return 0;
// }

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    for (char x : str)
    {
        cout << x;
    }
    return 0;
}