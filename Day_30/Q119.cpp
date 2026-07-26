#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Employee
{
    int empId;
    string name;
    string department;
    float salary;
};

// Function to add employee
void addEmployee(vector<Employee> &employees)
{
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.empId;

    cout << "Enter Employee Name: ";
    cin >> e.name;

    cout << "Enter Department: ";
    cin >> e.department;

    cout << "Enter Salary: ";
    cin >> e.salary;

    employees.push_back(e);

    cout << "\nEmployee Added Successfully!\n";
}

// Function to display employees
void displayEmployees(vector<Employee> &employees)
{
    if(employees.empty())
    {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n------ Employee Records ------\n";

    for(int i = 0; i < employees.size(); i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << employees[i].empId << endl;
        cout << "Name        : " << employees[i].name << endl;
        cout << "Department  : " << employees[i].department << endl;
        cout << "Salary      : " << employees[i].salary << endl;
    }
}

// Function to increase salary
void increaseSalary(vector<Employee> &employees)
{
    int id;
    float amount;

    cout << "Enter Employee ID: ";
    cin >> id;

    for(int i = 0; i < employees.size(); i++)
    {
        if(employees[i].empId == id)
        {
            cout << "Enter Salary Increment: ";
            cin >> amount;

            employees[i].salary += amount;

            cout << "\nSalary Updated Successfully!\n";
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

// Function to remove employee
void removeEmployee(vector<Employee> &employees)
{
    int id;

    cout << "Enter Employee ID: ";
    cin >> id;

    for(int i = 0; i < employees.size(); i++)
    {
        if(employees[i].empId == id)
        {
            employees.erase(employees.begin() + i);

            cout << "\nEmployee Removed Successfully!\n";
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

int main()
{
    vector<Employee> employees;
    int choice;

    do
    {
        cout << "\n====== Mini Employee Management System ======\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Increase Salary\n";
        cout << "4. Remove Employee\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addEmployee(employees);
                break;

            case 2:
                displayEmployees(employees);
                break;

            case 3:
                increaseSalary(employees);
                break;

            case 4:
                removeEmployee(employees);
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}