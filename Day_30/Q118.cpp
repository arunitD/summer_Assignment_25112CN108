#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
    bool issued;
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

    b.issued = false;

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

    cout << "\n------ Library Books ------\n";

    for(int i = 0; i < books.size(); i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID : " << books[i].bookId << endl;
        cout << "Title   : " << books[i].title << endl;
        cout << "Author  : " << books[i].author << endl;

        if(books[i].issued)
            cout << "Status  : Issued" << endl;
        else
            cout << "Status  : Available" << endl;
    }
}

// Function to issue a book
void issueBook(vector<Book> &books)
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    for(int i = 0; i < books.size(); i++)
    {
        if(books[i].bookId == id)
        {
            if(!books[i].issued)
            {
                books[i].issued = true;
                cout << "\nBook Issued Successfully!\n";
            }
            else
            {
                cout << "\nBook is Already Issued!\n";
            }
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

// Function to return a book
void returnBook(vector<Book> &books)
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    for(int i = 0; i < books.size(); i++)
    {
        if(books[i].bookId == id)
        {
            if(books[i].issued)
            {
                books[i].issued = false;
                cout << "\nBook Returned Successfully!\n";
            }
            else
            {
                cout << "\nBook is Already Available!\n";
            }
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

// Function to delete a book
void deleteBook(vector<Book> &books)
{
    int id;

    cout << "Enter Book ID: ";
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
        cout << "\n====== Mini Library System ======\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
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
                issueBook(books);
                break;

            case 4:
                returnBook(books);
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