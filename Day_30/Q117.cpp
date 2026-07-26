#include<iostream>
#include<string>
using namespace std;

int main()
{
    int roll[100], age[100];
    float marks[100];
    string name[100];

    int n = 0;
    int choice;

    do
    {
        cout << "\n====== Student Record System ======\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll[n];

                cout << "Enter Name: ";
                cin >> name[n];

                cout << "Enter Age: ";
                cin >> age[n];

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;

                cout << "\nStudent Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Records Found!\n";
                }
                else
                {
                    cout << "\n------ Student Records ------\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nStudent " << i + 1 << endl;
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Age         : " << age[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
                    }
                }
                break;

            case 3:
            {
                int r;
                bool found = false;

                cout << "Enter Roll Number: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        cout << "\nStudent Found!\n";
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Age         : " << age[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 4:
            {
                int r;
                bool found = false;

                cout << "Enter Roll Number to Update: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        cout << "Enter New Name: ";
                        cin >> name[i];

                        cout << "Enter New Age: ";
                        cin >> age[i];

                        cout << "Enter New Marks: ";
                        cin >> marks[i];

                        cout << "\nRecord Updated Successfully!\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 5:
            {
                int r;
                bool found = false;

                cout << "Enter Roll Number to Delete: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            roll[j] = roll[j + 1];
                            name[j] = name[j + 1];
                            age[j] = age[j + 1];
                            marks[j] = marks[j + 1];
                        }

                        n--;

                        cout << "\nRecord Deleted Successfully!\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}#include<iostream>
#include<string>
using namespace std;

int main()
{
    int roll[100], age[100];
    float marks[100];
    string name[100];

    int n = 0;
    int choice;

    do
    {
        cout << "\n====== Student Record System ======\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll[n];

                cout << "Enter Name: ";
                cin >> name[n];

                cout << "Enter Age: ";
                cin >> age[n];

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;

                cout << "\nStudent Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "\nNo Records Found!\n";
                }
                else
                {
                    cout << "\n------ Student Records ------\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nStudent " << i + 1 << endl;
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Age         : " << age[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
                    }
                }
                break;

            case 3:
            {
                int r;
                bool found = false;

                cout << "Enter Roll Number: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        cout << "\nStudent Found!\n";
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Age         : " << age[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 4:
            {
                int r;
                bool found = false;

                cout << "Enter Roll Number to Update: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        cout << "Enter New Name: ";
                        cin >> name[i];

                        cout << "Enter New Age: ";
                        cin >> age[i];

                        cout << "Enter New Marks: ";
                        cin >> marks[i];

                        cout << "\nRecord Updated Successfully!\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 5:
            {
                int r;
                bool found = false;

                cout << "Enter Roll Number to Delete: ";
                cin >> r;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            roll[j] = roll[j + 1];
                            name[j] = name[j + 1];
                            age[j] = age[j + 1];
                            marks[j] = marks[j + 1];
                        }

                        n--;

                        cout << "\nRecord Deleted Successfully!\n";

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "\nStudent Not Found!\n";

                break;
            }

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}