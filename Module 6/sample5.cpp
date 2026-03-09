#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    double grade;
    Student* next;
};


void addStudent(Student*& head, int id, string name, double grade) {
    Student* newStudent = new Student();
    newStudent->id = id;
    newStudent->name = name;
    newStudent->grade = grade;
    newStudent->next = nullptr;

    if (head == nullptr) {
        head = newStudent;
    } else {
        Student* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
    cout << "Student record added successfully!" << endl;
}


void removeStudent(Student*& head, int id) {
    if (head == nullptr) {
        cout << "No student records available. Nothing to remove." << endl;
        return;
    }

    if (head->id == id) {
        Student* temp = head;
        head = head->next;
        delete temp;
        cout << "Student record removed successfully!" << endl;
        return;
    }

    Student* temp = head;
    while (temp->next != nullptr && temp->next->id != id) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Student with ID " << id << " not found." << endl;
    } else {
        Student* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
        cout << "Student record removed successfully!" << endl;
    }
}


void searchStudent(Student* head, string name) {
    Student* temp = head;
    bool found = false;

    while (temp != nullptr) {
        if (temp->name == name) {
            cout << "Student Found:\nID: " << temp->id << "\nName: " << temp->name
                 << "\nGrade: " << temp->grade << endl;
            found = true;
            break;
        }
        temp = temp->next;
    }

    if (!found) {
        cout << "Student with name '" << name << "' not found." << endl;
    }
}


void displayStudents(Student* head) {
    if (head == nullptr) {
        cout << "No student records available." << endl;
        return;
    }

    Student* temp = head;
    while (temp != nullptr) {
        cout << "ID: " << temp->id << ", Name: " << temp->name
             << ", Grade: " << temp->grade << endl;
        temp = temp->next;
    }
}


int main() {
    Student* head = nullptr;
    int choice, id;
    string name;
    double grade;

    while (true) {
        cout << "\n--- Student Record Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Search Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Student ID: ";
                cin >> id;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Grade: ";
                cin >> grade;
                addStudent(head, id, name, grade);
                break;
            case 2:
                cout << "Enter Student ID to remove: ";
                cin >> id;
                removeStudent(head, id);
                break;
            case 3:
                cout << "Enter Name to search: ";
                cin.ignore();
                getline(cin, name);
                searchStudent(head, name);
                break;
            case 4:
                displayStudents(head);
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}

