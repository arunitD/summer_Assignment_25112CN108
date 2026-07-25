#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
    int quantity;
};

// Function to add a book
void addBook(vector<Book> &books)
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.bookId;

    cout << "Enter Book Title: ";
    cin >> b.title;

    cout << "Enter Author Name: ";
    cin >> b.author;

    cout << "Enter Quantity: ";
    cin >> b.quantity;

    books.push_back(b);

    cout << "\nBook Added Successfully!\n";
}

// Function to display books
void displayBooks(vector<Book> &books)
{
    if(books.empty())
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    cout << "\n------ Library Records ------\n";

    for(int i = 0; i < books.size(); i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID   : " << books[i].bookId << endl;
        cout << "Title     : " << books[i].title << endl;
        cout << "Author    : " << books[i].author << endl;
        cout << "Quantity  : " << books[i].quantity << endl;
    }
}

// Function to search book
void searchBook(vector<Book> &books)
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    for(int i = 0; i < books.size(); i++)
    {
        if(books[i].bookId == id)
        {
            cout << "\nBook Found!\n";
            cout << "Book ID   : " << books[i].bookId << endl;
            cout << "Title     : " << books[i].title << endl;
            cout << "Author    : " << books[i].author << endl;
            cout << "Quantity  : " << books[i].quantity << endl;
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

// Function to update book
void updateBook(vector<Book> &books)
{
    int id;

    cout << "Enter Book ID to Update: ";
    cin >> id;

    for(int i = 0; i < books.size(); i++)
    {
        if(books[i].bookId == id)
        {
            cout << "Enter New Title: ";
            cin >> books[i].title;

            cout << "Enter New Author: ";
            cin >> books[i].author;

            cout << "Enter New Quantity: ";
            cin >> books[i].quantity;

            cout << "\nBook Updated Successfully!\n";
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

// Function to delete book
void deleteBook(vector<Book> &books)
{
    int id;

    cout << "Enter Book ID to Delete: ";
    cin >> id;

    for(int i = 0; i < books.size(); i++)
    {
        if(books[i].bookId == id)
        {
            books.erase(books.begin() + i);
            cout << "\nBook Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

int main()
{
    vector<Book> books;
    int choice;

    do
    {
        cout << "\n====== Library Management System ======\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addBook(books);
                break;

            case 2:
                displayBooks(books);
                break;

            case 3:
                searchBook(books);
                break;

            case 4:
                updateBook(books);
                break;

            case 5:
                deleteBook(books);
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}