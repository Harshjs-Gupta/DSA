// write a book details by using structure
#include <iostream>
#include <string>
using namespace std;

struct book
{
    string bookname;
    int number;
    int price;
    string autname[20];
};
int main()
{
    struct book b;

    cout << "Book name: ";
    getline(cin, b.bookname);
    cout << endl;
    cout << "Number: ";
    cin >> b.number;
    cout << endl;
    cout << "Price: ";
    cin >> b.price;
    cout << endl;
    cout << "Authour name: ";
    cin >> b.autname[0];

    cout << "\n";

    cout << "Book name: " << b.bookname << "\n";
    cout << "Number: " << b.number << "\n";
    cout << "Price: " << b.price << "\n";
    cout << "Authour name: " << b.autname[0];

    return 0;
}

