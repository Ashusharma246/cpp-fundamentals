/*Book Inventory System
Create a C++ program to manage a book inventory system using structures. Each book should have the following attributes:

Title (string)
Author (string)
ISBN (string)
Price (float)
The program should allow the user to:

Add new books to the inventory.:completed.
Display the details of all books in the inventory.completed.
Search for a book by its ISBN and display its details.
Calculate and display the total value of the books in the inventory.*/
#include <iostream>
using namespace std;

struct bookinventory
{
    string Title;
    string Author;
    string ISBN;
    float Price;
};
int main()
{
    int num;
    cout << "how many number of books you want to add: ";
    cin >> num;
    struct bookinventory book[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter title of the book: " << endl;
        cin >> book[i].Title;
        cout << "enter Author name : " << endl;
        cin >> book[i].Author;
        cout << "enter ISBN  : " << endl;
        cin >> book[i].ISBN;
        cout << "enter Price : " << endl;
        cin >> book[i].Price;
    }
    cout << "book details: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Book Title: " << book[i].Title << endl;
        cout << "Book Author: " << book[i].Author << endl;
        cout << "Book ISBN: " << book[i].ISBN << endl;
        cout << "Book Price: " << book[i].Price << endl;
    }
    string newbook = "";
    cout << "do you want to add new book?: Y/N" << endl;
    cin >> newbook;
    if (newbook == "y")
    {
        int num2;
        cout << "how many number of books you want to add: ";
        cin >> num2;

        struct bookinventory newbook[num2];
        for (int i = 0; i < num2; i++)
        {
            cout << "enter title of the book: " << endl;
            cin >> newbook[i].Title;
            cout << "enter Author name : " << endl;
            cin >> newbook[i].Author;
            cout << "enter ISBN  : " << endl;
            cin >> newbook[i].ISBN;
            cout << "enter Price : " << endl;
            cin >> newbook[i].Price;
        }
        cout << "book details: " << endl;
        for (int i = 0; i < num2; i++)
        {
            cout << "Book Title: " << newbook[i].Title << endl;
            cout << "Book Author: " << newbook[i].Author << endl;
            cout << "Book ISBN: " << newbook[i].ISBN << endl;
            cout << "Book Price: " << newbook[i].Price << endl;
        }
    }
    string isbn;
    cout << "enter book ISBN that ypu wants to search: " << endl;
    cin >> isbn;
    if (newbook == "Y" || newbook == "y")
    {
        int num2;
        cout << "How many number of books you want to add: ";
        cin >> num2;

        for (int i = num; i < num + num2; i++)
        {
            cout << "Enter title of the book: ";
            cin >> books[i].Title;
            cout << "Enter Author name: ";
            cin >> books[i].Author;
            cout << "Enter ISBN: ";
            cin >> books[i].ISBN;
            cout << "Enter Price: ";
            cin >> books[i].Price;
        }

        num += num2;
    }

    string isbn;
    cout << "Enter book ISBN that you want to search: ";
    cin >> isbn;

    bool found = false;
    for (int i = 0; i < num; i++)
    {
        if (books[i].ISBN == isbn)
        {
            cout << "Book Title: " << books[i].Title << endl;
            cout << "Book Author: " << books[i].Author << endl;
            cout << "Book ISBN: " << books[i].ISBN << endl;
            cout << "Book Price: " << books[i].Price << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Book with ISBN " << isbn << " not found." << endl;
    }

    return 0;
}
