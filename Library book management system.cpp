C++
#include <iostream>
using namespace std;

class Book
{
    string title, author;
    int copies;

public:

    // Function to input book details
    void inputDetails()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author name: ";
        cin >> author;

        cout << "Enter number of copies: ";
        cin >> copies;
    }

    // Function to borrow a book
    void borrowBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "Book borrowed successfully!" << endl;
        }
        else
        {
            cout << "No copies available!" << endl;
        }
    }

    // Function to display book details
    void displayDetails()
    {
        cout << "\n------ BOOK DETAILS ------" << endl;
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << copies << endl;
    }
};

int main()
{
    Book b;

    b.inputDetails();

    b.borrowBook();

    b.displayDetails();

    return 0;
}
