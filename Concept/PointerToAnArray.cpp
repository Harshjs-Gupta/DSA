// write a program to access elements of array using pointer
#include <iostream>
using namespace std;
int main()
{

    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    p = &A[0];
    for (int i = 0; i < 5; i++)
    {
        cout<<A[i]<<endl;  //this is a simple method to access array elements
        cout << p[i] << endl; // this is a pointer method to access array elements
    }

    return 0;
}


// write a program to create a array elementss in heap memory in c++
// #include <iostream>
// using namespace std;
// int main()
// {

//     int *p;
//     p = new int[5];     //this new function is help to creat the element in heap memory in c++
//     p[0] = 2, p[1] = 4, p[2] = 6, p[3] = 8, p[4] = 10;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << p[i] << endl;
//     }

//     return 0;
// }


// write a program to create a array elementss in heap memory in c
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *p;
//     p = (int *)malloc(5 * sizeof(int));                ////this malloc function is help to creat the element in heap memory in c
//     p[0] = 2, p[1] = 4, p[2] = 6, p[3] = 8, p[4] = 10;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d \n", p[i]);
//     }

//     return 0;
// }

