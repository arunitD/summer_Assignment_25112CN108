#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Ticket
{
    int ticketId;
    string passengerName;
    string destination;
    float fare;
};

// Function to book ticket
void bookTicket(vector<Ticket> &tickets)
{
    Ticket t;

    cout << "Enter Ticket ID: ";
    cin >> t.ticketId;

    cout << "Enter Passenger Name: ";
    cin >> t.passengerName;

    cout << "Enter Destination: ";
    cin >> t.destination;

    cout << "Enter Fare: ";
    cin >> t.fare;

    tickets.push_back(t);

    cout << "\nTicket Booked Successfully!\n";
}

// Function to display all tickets
void displayTickets(vector<Ticket> &tickets)
{
    if(tickets.empty())
    {
        cout << "\nNo Tickets Booked!\n";
        return;
    }

    cout << "\n------ Ticket Records ------\n";

    for(int i = 0; i < tickets.size(); i++)
    {
        cout << "\nTicket " << i + 1 << endl;
        cout << "Ticket ID      : " << tickets[i].ticketId << endl;
        cout << "Passenger Name : " << tickets[i].passengerName << endl;
        cout << "Destination    : " << tickets[i].destination << endl;
        cout << "Fare           : " << tickets[i].fare << endl;
    }
}

// Function to search ticket
void searchTicket(vector<Ticket> &tickets)
{
    int id;

    cout << "Enter Ticket ID: ";
    cin >> id;

    for(int i = 0; i < tickets.size(); i++)
    {
        if(tickets[i].ticketId == id)
        {
            cout << "\nTicket Found!\n";
            cout << "Ticket ID      : " << tickets[i].ticketId << endl;
            cout << "Passenger Name : " << tickets[i].passengerName << endl;
            cout << "Destination    : " << tickets[i].destination << endl;
            cout << "Fare           : " << tickets[i].fare << endl;
            return;
        }
    }

    cout << "\nTicket Not Found!\n";
}

// Function to update ticket
void updateTicket(vector<Ticket> &tickets)
{
    int id;

    cout << "Enter Ticket ID to Update: ";
    cin >> id;

    for(int i = 0; i < tickets.size(); i++)
    {
        if(tickets[i].ticketId == id)
        {
            cout << "Enter New Passenger Name: ";
            cin >> tickets[i].passengerName;

            cout << "Enter New Destination: ";
            cin >> tickets[i].destination;

            cout << "Enter New Fare: ";
            cin >> tickets[i].fare;

            cout << "\nTicket Updated Successfully!\n";
            return;
        }
    }

    cout << "\nTicket Not Found!\n";
}

// Function to cancel ticket
void cancelTicket(vector<Ticket> &tickets)
{
    int id;

    cout << "Enter Ticket ID to Cancel: ";
    cin >> id;

    for(int i = 0; i < tickets.size(); i++)
    {
        if(tickets[i].ticketId == id)
        {
            tickets.erase(tickets.begin() + i);

            cout << "\nTicket Cancelled Successfully!\n";
            return;
        }
    }

    cout << "\nTicket Not Found!\n";
}

int main()
{
    vector<Ticket> tickets;
    int choice;

    do
    {
        cout << "\n====== Ticket Booking System ======\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Update Ticket\n";
        cout << "5. Cancel Ticket\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                bookTicket(tickets);
                break;

            case 2:
                displayTickets(tickets);
                break;

            case 3:
                searchTicket(tickets);
                break;

            case 4:
                updateTicket(tickets);
                break;

            case 5:
                cancelTicket(tickets);
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