#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n====== Menu Driven Array Operations ======\n";
        cout << "1. Insert Elements\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Update Element\n";
        cout << "5. Delete Element\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "How many elements do you want to insert? ";
                cin >> n;

                cout << "Enter " << n << " elements:\n";
                for(int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }
                break;

            case 2:
                if(n == 0)
                {
                    cout << "Array is empty!\n";
                }
                else
                {
                    cout << "Array Elements: ";
                    for(int i = 0; i < n; i++)
                    {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
            {
                int key;
                bool found = false;

                cout << "Enter element to search: ";
                cin >> key;

                for(int i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        cout << "Element found at index " << i << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Element not found!\n";
                }

                break;
            }

            case 4:
            {
                int index, value;

                cout << "Enter index to update: ";
                cin >> index;

                if(index >= 0 && index < n)
                {
                    cout << "Enter new value: ";
                    cin >> value;

                    arr[index] = value;

                    cout << "Element updated successfully!\n";
                }
                else
                {
                    cout << "Invalid index!\n";
                }

                break;
            }

            case 5:
            {
                int index;

                cout << "Enter index to delete: ";
                cin >> index;

                if(index >= 0 && index < n)
                {
                    for(int i = index; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;

                    cout << "Element deleted successfully!\n";
                }
                else
                {
                    cout << "Invalid index!\n";
                }

                break;
            }

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}