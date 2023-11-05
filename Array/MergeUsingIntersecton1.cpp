// write a program to merge two array using inetrsection operation


#include<iostream>
using namespace std;

struct Array
{
    int A[5];
    int B[5];
    int C[10];
    int lengthA;
    int lengthB;
};
void Intersection(struct Array *arr)
{
    int i=0;
    int j=0;
    int k=0;
    for (int i = 0; i < arr->lengthA; i++)
    {
        for (int j = 0; j < arr->lengthB; j++)
        {
            if (arr->A[i] == arr->B[j])
            {
                arr->C[k] = arr->A[i];
                k++; 
                break; 
            }
        }
    }
    cout << "After performe intersection operation: ";
}
void Display(struct Array arr)
{
    int C[10];
    for(int k=0;k<10;k++)
    {
        cout<<arr.C[k]<<" ";
    }
}
int main()
{   
   struct Array arr={{3, 5, 10, 4, 6}, {12, 4, 7, 2, 5}, {0}, 5, 5};

   Intersection(&arr);

   Display(arr);




    return 0;
}