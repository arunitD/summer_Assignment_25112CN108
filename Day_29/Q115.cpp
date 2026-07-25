#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int choice;

    do
    {
        cout << "\n====== Menu Driven String Operations ======\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Concatenate String\n";
        cout << "6. Compare String\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter String: ";
                cin >> str;
                break;

            case 2:
                cout << "String: " << str << endl;
                break;

            case 3:
                cout << "Length = " << str.length() << endl;
                break;

            case 4:
            {
                string rev = str;

                for(int i = 0, j = rev.length() - 1; i < j; i++, j--)
                {
                    char temp = rev[i];
                    rev[i] = rev[j];
                    rev[j] = temp;
                }

                cout << "Reversed String: " << rev << endl;
                break;
            }

            case 5:
            {
                string str2;

                cout << "Enter Another String: ";
                cin >> str2;

                cout << "Concatenated String: " << str + str2 << endl;
                break;
            }

            case 6:
            {
                string str2;

                cout << "Enter Another String: ";
                cin >> str2;

                if(str == str2)
                {
                    cout << "Both Strings are Equal." << endl;
                }
                else
                {
                    cout << "Strings are Not Equal." << endl;
                }

                break;
            }

            case 7:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}