// write a progrm to create a variable in heap memory
#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{

    struct rectangle *p;

    p = new struct rectangle[5];

    (*p).length = 10;
    (*p).breadth = 5;

    cout << (*p).length << "\n";
    cout << (*p).breadth << endl;
    cout << (*p).length * (*p).breadth << "\n";
    cout << 2 * ((*p).length + (*p).breadth) << endl;

    return 0;
}

// write a program to create a variable in heap memory in c language
// #include <stdio.h>
// #include <stdlib.h>

// struct rectangle
// {
//    int length;
//    int breadth;
// };
// int area(rectangle r)
// {
//    return r.length * r.breadth;
// }
// int perimeter(rectangle r)
// {
//    return 2 * (r.length + r.breadth);
// }
// int main()
// {

//    struct rectangle *p;

//    p = (struct rectangle *)malloc(sizeof(struct rectangle));

//    p->length = 10;
//    p->breadth = 5;

//    printf("Breadth is: ");
//    printf("%d \n", p->length);
//    printf("Length is: ");
//    printf("%d \n", p->breadth);

//    printf("Area of rectangle: %d", p->length * p->breadth);
//    printf("\n");
//    printf("Perimeter of rectangle: %d", 2 * (p->length + p->breadth));

//    return 0;
// }