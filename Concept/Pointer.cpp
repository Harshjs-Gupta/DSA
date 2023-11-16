// // write a program to make a pointer variable
#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr;
    ptr = &num;

    cout << num << endl;  // this access the variable num and give=5.
    cout << ptr << endl;  // this access the pointer variable ptr which can store (*num) address and give address of (&num).
    cout << &num << endl; // this access the address of variable num.
    cout << &ptr << endl; // this access the address of variable ptr.
    cout << *ptr << endl; // this access the value of variable num by using "astrisk" (*ptr) and they give=5.

    return 0;
}


