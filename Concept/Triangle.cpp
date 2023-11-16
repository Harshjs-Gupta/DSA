/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named
'Triangle' with a function to print the area and perimeter.*/
#include <iostream>
using namespace std;

class triangle
{
private:
    int height;
    int base;
    int side1;
    int side2;
    int side3;

public:
    triangle(int h, int b)
    {
        height = h;
        base = b;
    }
    int area()
    {
        return (height * base) / 2;
    }
    int perimeter(int s, int si, int sid)
    {
        side1 = s;
        side2 = si;
        side3 = sid;

        return side1 + side2 + side3;
    }
    int getheight()
    {
        return height;
    }
    int getbase()
    {
        return base;
    }
};
int main()
{

    triangle t(10, 5);

    cout << "Height is: " << t.getheight() << "\n";
    cout << "Base is: " << t.getbase() << "\n";

    cout << "Area is: " << t.area() << "\n";
    cout << "Perimeter is: " << t.perimeter(2, 2, 2);

    return 0;
}