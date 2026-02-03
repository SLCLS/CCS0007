/******************************************************************************
struct struct_name {
    member data;
    data_type name;
};

struct_name name;
*******************************************************************************/
#include <iostream>
using namespace std;

struct Student {
  int id;
  char name[50];
  double grade;
};

Student addStudent(){
    Student student;
    cout << "Enter ID: ";
    cin >> student.id;
    cin.ignore();
    cout << "Enter name: ";
    cin.getline(student.name,49);
    cout << "Enter Grade: ";
    cin >> student.grade;
    return student;
}

void displayStudent (Student student) {
    cout << "\nStudent Details: \n";
    cout << "Id: " << student.id << endl;
    cout << "Name: "<< student.name << endl;
    cout << "Grade: " << student.grade << endl;
    
}

int main()
{
    Student stud;
    int choice;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                stud = addStudent();
                break;
            case 2:
                displayStudent(stud);
                break;
            case 3:
                cout << "Exit....\n";
                break;
            default:
                cout << "Invalid Choice ....\n";
            
        }
    }while (choice !=3);
    return 0;
}
