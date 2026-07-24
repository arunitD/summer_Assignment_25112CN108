#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks1, marks2, marks3;
    float total;
    float percentage;
    char grade;
};

// Function to add student
void addStudent(vector<Student> &students)
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks in Subject 1: ";
    cin >> s.marks1;

    cout << "Enter Marks in Subject 2: ";
    cin >> s.marks2;

    cout << "Enter Marks in Subject 3: ";
    cin >> s.marks3;

    // Calculate total and percentage
    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3.0;

    // Calculate grade
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    students.push_back(s);

    cout << "\nMarksheet Generated Successfully!\n";
}

// Function to display marksheets
void displayStudents(vector<Student> &students)
{
    if(students.empty())
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    for(int i = 0; i < students.size(); i++)
    {
        cout << "\n========== Marksheet ==========\n";
        cout << "Roll Number : " << students[i].roll << endl;
        cout << "Name        : " << students[i].name << endl;
        cout << "Subject 1   : " << students[i].marks1 << endl;
        cout << "Subject 2   : " << students[i].marks2 << endl;
        cout << "Subject 3   : " << students[i].marks3 << endl;
        cout << "Total Marks : " << students[i].total << endl;
        cout << "Percentage  : " << students[i].percentage << "%" << endl;
        cout << "Grade       : " << students[i].grade << endl;
    }
}

// Function to search student
void searchStudent(vector<Student> &students)
{
    int roll;

    cout << "Enter Roll Number: ";
    cin >> roll;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].roll == roll)
        {
            cout << "\n========== Marksheet ==========\n";
            cout << "Roll Number : " << students[i].roll << endl;
            cout << "Name        : " << students[i].name << endl;
            cout << "Total Marks : " << students[i].total << endl;
            cout << "Percentage  : " << students[i].percentage << "%" << endl;
            cout << "Grade       : " << students[i].grade << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

// Function to delete student
void deleteStudent(vector<Student> &students)
{
    int roll;

    cout << "Enter Roll Number: ";
    cin >> roll;

    for(int i = 0; i < students.size(); i++)
    {
        if(students[i].roll == roll)
        {
            students.erase(students.begin() + i);
            cout << "\nRecord Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

int main()
{
    vector<Student> students;
    int choice;

    do
    {
        cout << "\n====== Marksheet Generation System ======\n";
        cout << "1. Add Student\n";
        cout << "2. Display Marksheets\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent(students);
                break;

            case 2:
                displayStudents(students);
                break;

            case 3:
                searchStudent(students);
                break;

            case 4:
                deleteStudent(students);
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