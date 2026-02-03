/******************************************************************************
 Multiple Nested Structure
*******************************************************************************/
#include <iostream>
using namespace std;

struct Book {
  char title[50];
  double price;
};

struct Student {
    char name[50];
    int age;
    Book bookBought;
};

Student addStudent() {
    Student student;
    cout << "Enter Name: ";
    cin.getline(student.name,49);
    cout << "Enter Age: ";
    cin >> student.age;
    cin.ignore();
    cout << "Enter Title Book ";
    cin.getline(student.bookBought.title,49);
    cout << "Enter Book Price ";
    cin >> student.bookBought.price;
    return student;
}

void displayStudent(Student student){
    cout << "Student Details:\n";
    cout << "Name: "<< student.name<<endl;
    cout << "Age: "<< student.age<<endl;
    cout << "Book Purchase " << student.bookBought.title << " - " 
        << student.bookBought.price << "\n";
    
}

int main()
{
    Student student = addStudent();
    displayStudent(student);
    return 0;
}
