#include<stdio.h>

struct rectangle
{
    int length;
    int breadth;
};
void initialise(struct rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r)
{
    return r.length*r.breadth;
}
int changeLength(struct rectangle *r,int l)
{
    return r->length=l;
}
int main()
{
    struct rectangle r;

    initialise(&r,10,5);
    printf("Area is: %d\n",area(r));
    printf("Perimetre is: %d\n",changeLength(&r,20));
    
    return 0;
}



// #include <iostream>
// using namespace std;

// class rectangle
// {
// private:
//     int length;
//     int breadth;

// public:
//     rectangle(int l, int b)
//     {
//          length = l;
//          breadth = b;
//     }
//     int area()
//     {
//         return length * breadth;
//     }
//     int perimeter()
//     {
//         return 2*(length+breadth);
//     }
//     int changelength(int len)
//     {

//         return length = len;
    
//     }
//     int getlength()
//     {
//         return length;
//     }
//     int getbreadth()
//     {
//         return breadth;
//     }
   
// };
// int main()
// {
//     rectangle r(10,5);
    
//     cout<<"Length is: "<<r.getlength()<<"\n";
//     cout<<"Breadth is: "<<r.getbreadth()<<"\n";
//     cout<<"Area is: "<<r.area()<<"\n";
//     cout<<"Perimeter is: "<<r.perimeter()<<"\n";
//     cout<<"Modifie length is: "<<r.changelength(20);


//     return 0;
// }


