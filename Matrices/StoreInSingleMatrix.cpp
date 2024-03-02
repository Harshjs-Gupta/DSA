// // write a program to store a diagonal matrix in a single matrix

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
int StoreData(struct Matrices *mat)
{
    int B[5] = {0};
    int k = 0;
    while (k < 5)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == j)
                {
                    B[k] = mat->A[i -1];
                    k++;
                }
            }
        }
    }
    cout<<"Diagonal matrix stored in single Dimensonal Array: ";
    for (int k = 0; k < 5; k++)
    {
        cout << B[k] << " ";
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
    cout<<"\n";
    StoreData(&mat);

    return 0;
}

// write a program to store diagonal matrix elements in single dimensonal array

// #include <iostream>
// using namespace std;

// class Matrix
// {
// private:
//     int A[2];

// public:
//     void Set(int i, int j, int x)
//     {
//         if (i == j)
//         {
//             A[i - 1] = x;
//         }
//     }
//     int Get(int i, int j)
//     {
//         if (i == j)
//         {
//             return A[i - 1];
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     void Display()
//     {
//         cout << "Diagonal matrix is: \n";
//         for (int i = 0; i < 5; i++)
//         {
//             for (int j = 0; j < 5; j++)
//             {
//                 if (i == j)
//                 {
//                     cout << A[i - 1] << " ";
//                 }
//                 else
//                 {
//                     cout << "0 ";
//                 }
//             }
//             cout << "\n";
//         }
//     }
//     void StoreData()
//     {
//         int B[5];
//         int k = 0;
//         cout << "Store Data in single dimensional: ";

//         while (k < 5)
//         {
//             for (int i = 0; i < 5; i++)
//             {
//                 for (int j = 0; j < 5; j++)
//                 {
//                     if (i == j)
//                     {
//                         B[k] = A[i - 1];
//                         k++;
//                     }
//                 }
//             }
//         }
//         for (int k = 0; k < 5; k++)
//         {
//             cout << B[k] << " ";
//         }
//     }
// };
// int main()
// {
//     Matrix mat;

//     mat.Set(0, 0, 5);
//     mat.Set(1, 1, 6);
//     mat.Set(2, 2, 7);
//     mat.Set(3, 3, 8);
//     mat.Set(4, 4, 9);

//     mat.Display();
//     cout<<"\n";
//     mat.StoreData();

//     return 0;
// }

