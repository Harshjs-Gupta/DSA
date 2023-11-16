// write a program of rectangle by using call by value
#include <iostream>
#include <stdio.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;

    int area(struct rectangle r1)
    {
        r1.length++; // here the value of length increses to 1 and final value is 11 in function they can't effect the value of main function or actual parametr
        return r1.length * r1.breadth;
    }
};
int main()
{
    struct rectangle r = {10, 5};
    cout << "Length is: " << r.length << "\n";
    cout << "Breadth is: " << r.breadth << "\n";
    cout << "Area is: " << r.area(r);

    return 0;
}



// write a program of rectangle by using call by reference
// #include <iostream>
// #include <stdio.h>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breadth;
// };
// void fun(struct rectangle &r1)
// {
//     r1.length=20;
//     cout<<"Length is: "<<r1.length<<"\n";
//     cout<<"Breadth is: "<<r1.breadth<<endl;
// }
// int main()
// {
//     struct rectangle r = {10, 5};
//     fun(r);
//     cout << "Length is: " << r.length << "\n";
//     cout << "Breadth is: " << r.breadth << "\n";

//     return 0;
// }

// write a program of rectangle by using call by address
// #include <iostream>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breadth;
// };
// void fun(struct rectangle *ptr)
// {
//     ptr->length = 20;
//     cout << "Length is: " << ptr->length << "\n";
//     cout << "Breadth is: " << ptr->breadth << endl;
// }
// int main()
// {
//     struct rectangle r = {10, 5};
//     fun(&r);
//     cout << "Length is: " << r.length << "\n";
//     cout << "Breadth is: " << r.breadth << endl;

//     return 0;
// }
