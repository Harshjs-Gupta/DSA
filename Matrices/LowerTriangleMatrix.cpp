// write a program to make a lower triangular matrix
#include <iostream>
using namespace std;

class Matrix
{
private:
    int A[10];

public:
    void Set(int i, int j, int x)
    {
        if (i >= j)
        {
            A[i - 1] = x;
        }
    }
    int Get(int i, int j)
    {
        if (i >= j)
        {
            return A[i - 1];
        }
        else
        {
            return 0;
        }
    }
    void Display()
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i >= j)
                {
                    cout << A[i - 1] << " ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << "\n";
        }
    }
};
int main()
{
    Matrix mat;

    mat.Set(1, 1, 1);
    mat.Set(2, 1, 2);
    mat.Set(2, 2, 3);
    mat.Set(3, 1, 4);
    mat.Set(3, 2, 5);
    mat.Set(3, 3, 6);
    mat.Set(4, 1, 7);
    mat.Set(4, 2, 8);
    mat.Set(4, 3, 9);
    mat.Set(4, 4, 8);
    mat.Set(5, 1, 7);
    mat.Set(5, 2, 6);
    mat.Set(5, 3, 5);
    mat.Set(5, 4, 4);
    mat.Set(5, 5, 3);

    mat.Display();

    return 0;
}