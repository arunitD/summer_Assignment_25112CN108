#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Item
{
    int itemId;
    string itemName;
    int quantity;
    float price;
};

// Function to add item
void addItem(vector<Item> &items)
{
    Item i;

    cout << "Enter Item ID: ";
    cin >> i.itemId;

    cout << "Enter Item Name: ";
    cin >> i.itemName;

    cout << "Enter Quantity: ";
    cin >> i.quantity;

    cout << "Enter Price: ";
    cin >> i.price;

    items.push_back(i);

    cout << "\nItem Added Successfully!\n";
}

// Function to display items
void displayItems(vector<Item> &items)
{
    if(items.empty())
    {
        cout << "\nNo Items Found!\n";
        return;
    }

    cout << "\n------ Inventory ------\n";

    for(int i = 0; i < items.size(); i++)
    {
        cout << "\nItem " << i + 1 << endl;
        cout << "Item ID   : " << items[i].itemId << endl;
        cout << "Item Name : " << items[i].itemName << endl;
        cout << "Quantity  : " << items[i].quantity << endl;
        cout << "Price     : " << items[i].price << endl;
    }
}

// Function to search item
void searchItem(vector<Item> &items)
{
    int id;

    cout << "Enter Item ID: ";
    cin >> id;

    for(int i = 0; i < items.size(); i++)
    {
        if(items[i].itemId == id)
        {
            cout << "\nItem Found!\n";
            cout << "Item ID   : " << items[i].itemId << endl;
            cout << "Item Name : " << items[i].itemName << endl;
            cout << "Quantity  : " << items[i].quantity << endl;
            cout << "Price     : " << items[i].price << endl;
            return;
        }
    }

    cout << "\nItem Not Found!\n";
}

// Function to update item
void updateItem(vector<Item> &items)
{
    int id;

    cout << "Enter Item ID to Update: ";
    cin >> id;

    for(int i = 0; i < items.size(); i++)
    {
        if(items[i].itemId == id)
        {
            cout << "Enter New Item Name: ";
            cin >> items[i].itemName;

            cout << "Enter New Quantity: ";
            cin >> items[i].quantity;

            cout << "Enter New Price: ";
            cin >> items[i].price;

            cout << "\nItem Updated Successfully!\n";
            return;
        }
    }

    cout << "\nItem Not Found!\n";
}

// Function to delete item
void deleteItem(vector<Item> &items)
{
    int id;

    cout << "Enter Item ID to Delete: ";
    cin >> id;

    for(int i = 0; i < items.size(); i++)
    {
        if(items[i].itemId == id)
        {
            items.erase(items.begin() + i);

            cout << "\nItem Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nItem Not Found!\n";
}

int main()
{
    vector<Item> items;
    int choice;

    do
    {
        cout << "\n====== Inventory Management System ======\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addItem(items);
                break;

            case 2:
                displayItems(items);
                break;

            case 3:
                searchItem(items);
                break;

            case 4:
                updateItem(items);
                break;

            case 5:
                deleteItem(items);
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