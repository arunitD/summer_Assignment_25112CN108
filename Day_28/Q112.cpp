#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Contact
{
    int contactId;
    string name;
    string phone;
    string email;
};

// Function to add contact
void addContact(vector<Contact> &contacts)
{
    Contact c;

    cout << "Enter Contact ID: ";
    cin >> c.contactId;

    cout << "Enter Name: ";
    cin >> c.name;

    cout << "Enter Phone Number: ";
    cin >> c.phone;

    cout << "Enter Email: ";
    cin >> c.email;

    contacts.push_back(c);

    cout << "\nContact Added Successfully!\n";
}

// Function to display contacts
void displayContacts(vector<Contact> &contacts)
{
    if(contacts.empty())
    {
        cout << "\nNo Contacts Found!\n";
        return;
    }

    cout << "\n------ Contact List ------\n";

    for(int i = 0; i < contacts.size(); i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Contact ID : " << contacts[i].contactId << endl;
        cout << "Name       : " << contacts[i].name << endl;
        cout << "Phone      : " << contacts[i].phone << endl;
        cout << "Email      : " << contacts[i].email << endl;
    }
}

// Function to search contact
void searchContact(vector<Contact> &contacts)
{
    int id;

    cout << "Enter Contact ID: ";
    cin >> id;

    for(int i = 0; i < contacts.size(); i++)
    {
        if(contacts[i].contactId == id)
        {
            cout << "\nContact Found!\n";
            cout << "Contact ID : " << contacts[i].contactId << endl;
            cout << "Name       : " << contacts[i].name << endl;
            cout << "Phone      : " << contacts[i].phone << endl;
            cout << "Email      : " << contacts[i].email << endl;
            return;
        }
    }

    cout << "\nContact Not Found!\n";
}

// Function to update contact
void updateContact(vector<Contact> &contacts)
{
    int id;

    cout << "Enter Contact ID to Update: ";
    cin >> id;

    for(int i = 0; i < contacts.size(); i++)
    {
        if(contacts[i].contactId == id)
        {
            cout << "Enter New Name: ";
            cin >> contacts[i].name;

            cout << "Enter New Phone Number: ";
            cin >> contacts[i].phone;

            cout << "Enter New Email: ";
            cin >> contacts[i].email;

            cout << "\nContact Updated Successfully!\n";
            return;
        }
    }

    cout << "\nContact Not Found!\n";
}

// Function to delete contact
void deleteContact(vector<Contact> &contacts)
{
    int id;

    cout << "Enter Contact ID to Delete: ";
    cin >> id;

    for(int i = 0; i < contacts.size(); i++)
    {
        if(contacts[i].contactId == id)
        {
            contacts.erase(contacts.begin() + i);

            cout << "\nContact Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nContact Not Found!\n";
}

int main()
{
    vector<Contact> contacts;
    int choice;

    do
    {
        cout << "\n====== Contact Management System ======\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addContact(contacts);
                break;

            case 2:
                displayContacts(contacts);
                break;

            case 3:
                searchContact(contacts);
                break;

            case 4:
                updateContact(contacts);
                break;

            case 5:
                deleteContact(contacts);
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