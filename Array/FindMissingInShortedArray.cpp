// write a program to find a missing elements of n natural number whcch is start from (1) and where the array which is shorted

// #include <iostream>
// using namespace std;

// struct Array
// {
//     int A[11];
//     int length;
// };
// void FindSingleElement(struct Array *arr)
// {
//     int sum = 0;
//     int s, n = 12;
//     for (int i = 0; i < arr->length; i++)
//     {
//         sum = sum + arr->A[i];
//     }
//     s = n * (n + 1) / 2;
//     cout << "Missing elements is: " << s - sum;
// }
// int main()
// {
//     struct Array arr = {{1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}, 11};

//     FindSingleElement(&arr);

//     return 0;
// }




// write a program to find a missing elements of n natural number but it starts from (6)  and where the array which is also shorted

#include <iostream>
using namespace std;

struct Array
{
    int A[11];
    int length;
};
void FindSingleElement(struct Array *arr)
{
    int diff, l = 6;
    diff = l - 0;
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] - i != diff)
        {
            std:: cout << "Missing element is: " << i + diff;
            break;
        }
    }
}
int main()
{
    struct Array arr = {{6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17}, 11};

    FindSingleElement(&arr);

    return 0;
}