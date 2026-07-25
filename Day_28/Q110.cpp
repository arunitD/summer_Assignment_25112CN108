#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Account
{
    int accountNo;
    string name;
    float balance;
};

// Function to create account
void createAccount(vector<Account> &accounts)
{
    Account a;

    cout << "Enter Account Number: ";
    cin >> a.accountNo;

    cout << "Enter Account Holder Name: ";
    cin >> a.name;

    cout << "Enter Initial Balance: ";
    cin >> a.balance;

    accounts.push_back(a);

    cout << "\nAccount Created Successfully!\n";
}

// Function to display all accounts
void displayAccounts(vector<Account> &accounts)
{
    if(accounts.empty())
    {
        cout << "\nNo Account Found!\n";
        return;
    }

    cout << "\n------ Account Details ------\n";

    for(int i = 0; i < accounts.size(); i++)
    {
        cout << "\nAccount " << i + 1 << endl;
        cout << "Account Number : " << accounts[i].accountNo << endl;
        cout << "Name           : " << accounts[i].name << endl;
        cout << "Balance        : " << accounts[i].balance << endl;
    }
}

// Function to search account
void searchAccount(vector<Account> &accounts)
{
    int accNo;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for(int i = 0; i < accounts.size(); i++)
    {
        if(accounts[i].accountNo == accNo)
        {
            cout << "\nAccount Found!\n";
            cout << "Account Number : " << accounts[i].accountNo << endl;
            cout << "Name           : " << accounts[i].name << endl;
            cout << "Balance        : " << accounts[i].balance << endl;
            return;
        }
    }

    cout << "\nAccount Not Found!\n";
}

// Function to deposit money
void deposit(vector<Account> &accounts)
{
    int accNo;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for(int i = 0; i < accounts.size(); i++)
    {
        if(accounts[i].accountNo == accNo)
        {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;

            accounts[i].balance += amount;

            cout << "\nAmount Deposited Successfully!\n";
            return;
        }
    }

    cout << "\nAccount Not Found!\n";
}

// Function to withdraw money
void withdraw(vector<Account> &accounts)
{
    int accNo;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    for(int i = 0; i < accounts.size(); i++)
    {
        if(accounts[i].accountNo == accNo)
        {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            if(amount <= accounts[i].balance)
            {
                accounts[i].balance -= amount;
                cout << "\nWithdrawal Successful!\n";
            }
            else
            {
                cout << "\nInsufficient Balance!\n";
            }

            return;
        }
    }

    cout << "\nAccount Not Found!\n";
}

// Function to delete account
void deleteAccount(vector<Account> &accounts)
{
    int accNo;

    cout << "Enter Account Number to Delete: ";
    cin >> accNo;

    for(int i = 0; i < accounts.size(); i++)
    {
        if(accounts[i].accountNo == accNo)
        {
            accounts.erase(accounts.begin() + i);

            cout << "\nAccount Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nAccount Not Found!\n";
}

int main()
{
    vector<Account> accounts;
    int choice;

    do
    {
        cout << "\n====== Bank Account System ======\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Delete Account\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                createAccount(accounts);
                break;

            case 2:
                displayAccounts(accounts);
                break;

            case 3:
                searchAccount(accounts);
                break;

            case 4:
                deposit(accounts);
                break;

            case 5:
                withdraw(accounts);
                break;

            case 6:
                deleteAccount(accounts);
                break;

            case 7:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}