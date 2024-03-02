// write a program to display diagonal matrices

#include <iostream>
using namespace std;

struct Matrices
{
    int A[10];
};
void Set(struct Matrices *mat, int i, int j, int x)
{
    if (i == j)
    {
        mat->A[i - 1] = x;
    }
}
int Get(struct Matrices *mat, int i, int j)
{
    if (i == j)
    {
        return mat->A[i - 1];
    }
    else
    {
        return 0;
    }
    cout << "\n";
}
int Display(struct Matrices *mat)
{
    cout<<"Diagonal matrix: "<<"\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                cout << mat->A[i - 1]<<" ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    struct Matrices mat;

    Set(&mat, 0, 0, 5);
    Set(&mat, 1, 1, 6);
    Set(&mat, 2, 2, 7);
    Set(&mat, 3, 3, 8);
    Set(&mat, 4, 4, 9);

    Get(&mat, 3, 3);
    Get(&mat, 4, 4);

    Display(&mat);

    return 0;
}