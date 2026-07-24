#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct student{
    int roll;
    string name;
    int age;
    float marks;
};

//Function to add a student
void add_student(vector<student> &students){
    student s1;
    cout<<"Enter roll number";
    cin>>s1.roll;
    cout<<"Enter name";
    cin>>s1.name;
    cout<<"Enter age";
    cin>>s1.age;
    cout<<"Enter marks";
    cin>>s1.marks;

    students.push_back(s1);
}

//Function to display details of a student 
void display(vector<student> &students){
    if(students.empty()){
      cout<<"No record found\n";
      return ;
    }
    cout<<"Students record is ";
    for(int i=0; i<students.size(); i++){
        cout<<"\nStudent "<<i+1;
        cout<<"Roll number:"<<students[i].roll<<endl;
        cout<<"name:"<<students[i].name<<endl;
        cout<<"age:"<<students[i].age<<endl;
        cout<<"marks:"<<students[i].marks<<endl;
    }
    
}

//Function to search a student 
void searchStudent(vector<student> &students){
    int roll;
    cout<<"Enter roll number of the student";
    cin>>roll;

    for(int i=0; i<students.size(); i++){
        if(students[i].roll==roll){
            cout<<"Record of the student is";
            cout<<"Roll number:"<<students[i].roll<<endl;
            cout<<"name:"<<students[i].name<<endl;
            cout<<"age:"<<students[i].age<<endl;
            cout<<"marks:"<<students[i].marks<<endl;
            return;
        }
    }
    cout<<"Student not found";
}

//Function to update the record of a student
void update(vector<student> &students){
    int roll;
    cout<<"Enter the roll no. of the student you want to update";
    cin>>roll;
    for(int i=0; i<students.size(); i++){
        if(students[i].roll==roll){
            cout<<"Enter new name ";
            cin>>students[i].name;
            cout<<"Enter new age";
            cin>>students[i].age;
            cout<<"Enter new marks";
            cin>>students[i].marks;

            cout<<"\nStudents recoed updated succesfully";
            return;
        }
    }
    cout<<"Student not found!";
}

//Function to delete a student 
void deleteStudent(vector<student> &students){
    int roll;
    cout<<"Enter roll number of the student";
    cin>>roll;

    for(int i=0; i<students.size(); i++){
        if(students[i].roll==roll){
            students.erase(students.begin()+i);
            cout<<"\nStudent record has been deleted succesfully";
            return;
        }
    }
    cout << "\nStudent not found!\n";
}
int main(){
    vector<student> students;
    int choice;

    do{
        cout << "\n====== Student Record Management System ======\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout<<"Enter your choice";
        cin>>choice;

        switch(choice){
            case 1:
            add_student(students);
            break;

            case 2:
            display(students);
            break;

            case 3:
            searchStudent(students);
            break;

            case 4:
            update(students);
            break;

            case 5:
            deleteStudent(students);
            break;

            case 6:
            cout<<"\nThnak you\n";
            break;

            default:
            cout<<"\nInvalid choice!\n";
        }
    }while(choice!=6);

    return 0;
}