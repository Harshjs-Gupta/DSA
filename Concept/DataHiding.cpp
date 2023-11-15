/*in data hiding every thing which is written in class are private by default then as a programmer we can public the function of class 
and private the member of class*/

#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 1;
    }
    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 1;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
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

    rectangle r;

    r.setLength(-10);
    r.setBreadth(5);

    cout << "Length is: ";
    cout << r.getLength() << "\n";
    cout << "Breadth is: ";
    cout << r.getBreadth() << endl;

    cout << "\n";

    cout << "Area is: " << r.area() << "\n";
    cout << "Perimeter is: " << r.perimeter() << endl;

    return 0;
}



/*Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two
 objects of the class 'Student'*/

// #include <iostream>
// #include<string>
// using namespace std;

// class student
// {
//     string name[20];
//     int roll_no;
//     long long int phone_no;
//     string address[40];

// public:
//     string getName()
//     {
//         return name[20];
//     }
//     int getRoll_no()
//     {
//         return roll_no;
//     }
//     long long int getPhone_no()
//     {
//         return phone_no;
//     }
//     string getAddress()
//     {
//         return address[40];
//     }
// };
// int main()
// {

//     string name[20];
//     int roll_no;
//     long long int phone_no;
//     string address[40];
//     student st;

//     for (int i = 1; i <= 2; i++)
//     {
//         cin >> name[i] >> roll_no >> phone_no >> address[i];
//         cout << "\n";
//         cout << "Student name: " << st.getName() << "\n";
//         cout << "Roll number: " << st.getRoll_no() << "\n";
//         cout << "Phone number: " << st.getPhone_no() << "\n";
//         cout << "Address: " << st.getAddress() << endl;

//         cout << "\n";
//     }

//     return 0;
// }