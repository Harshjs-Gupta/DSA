#include<iostream>
using namespace std;
int main()
{
    int length,breadth;

    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;

    int area=length*breadth;
    int perimeter=2*(length+breadth);

    cout<<"area is: "<<area<<"\n";
    cout<<"perimeter is: "<<perimeter<<endl;

    return 0;
}