#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Employee
{
    int empId;
    string name;
    int age;
    string department;
    float salary;
};

// Function to add an employee
void addEmployee(vector<Employee> &employees)
{
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.empId;

    cout << "Enter Name: ";
    cin >> e.name;

    cout << "Enter Age: ";
    cin >> e.age;

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
    if (employees.empty())
    {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n------ Employee Records ------\n";

    for (int i = 0; i < employees.size(); i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << employees[i].empId << endl;
        cout << "Name        : " << employees[i].name << endl;
        cout << "Age         : " << employees[i].age << endl;
        cout << "Department  : " << employees[i].department << endl;
        cout << "Salary      : " << employees[i].salary << endl;
    }
}

// Function to search an employee
void searchEmployee(vector<Employee> &employees)
{
    int id;

    cout << "Enter Employee ID: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].empId == id)
        {
            cout << "\nEmployee Found!\n";
            cout << "Employee ID : " << employees[i].empId << endl;
            cout << "Name        : " << employees[i].name << endl;
            cout << "Age         : " << employees[i].age << endl;
            cout << "Department  : " << employees[i].department << endl;
            cout << "Salary      : " << employees[i].salary << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

// Function to update employee details
void updateEmployee(vector<Employee> &employees)
{
    int id;

    cout << "Enter Employee ID to Update: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].empId == id)
        {
            cout << "Enter New Name: ";
            cin >> employees[i].name;

            cout << "Enter New Age: ";
            cin >> employees[i].age;

            cout << "Enter New Department: ";
            cin >> employees[i].department;

            cout << "Enter New Salary: ";
            cin >> employees[i].salary;

            cout << "\nEmployee Record Updated Successfully!\n";
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

// Function to delete an employee
void deleteEmployee(vector<Employee> &employees)
{
    int id;

    cout << "Enter Employee ID to Delete: ";
    cin >> id;

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].empId == id)
        {
            employees.erase(employees.begin() + i);
            cout << "\nEmployee Deleted Successfully!\n";
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
        cout << "\n====== Employee Management System ======\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addEmployee(employees);
            break;

        case 2:
            displayEmployees(employees);
            break;

        case 3:
            searchEmployee(employees);
            break;

        case 4:
            updateEmployee(employees);
            break;

        case 5:
            deleteEmployee(employees);
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}