// write a program to increase the size of array

#include <iostream>
using namespace std;

int main()
{
    int *arr;
    arr = new int[6];
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 6;
    arr[3] = 8;
    arr[4] = 10;
    arr[5] = 12;

    int *q;
    q = new int[10];
    q[6]=1;
    q[7]=3;
    q[8]=5;
    q[9]=7;
    for (int i = 0; i < 6; i++)
    {
        q[i] = arr[i];
    }
    delete[] arr;
    arr = q;
    q = NULL;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\n";
    }

    return 0;
}