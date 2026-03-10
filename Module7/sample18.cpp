#include <iostream>
#include <cstdio>
#include <fstream> 
#include <cstring>
using namespace std;

void createFile();
void readFile();
void appendToFile();
void writeFormattedData();
void exitProgram();

int main() {
    int choice;

    while (true) {
       
        cout << "\n=== MENU ===\n";
        cout << "1. Create a new file and write data\n";
        cout << "2. Read data from a file\n";
        cout << "3. Append data to an existing file\n";
        cout << "4. Write formatted data to a file\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

     
        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                readFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                writeFormattedData();
                break;
            case 5:
                exitProgram();
                return 0; 
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}


void createFile() {
    FILE *fp;
    fp = fopen("example2.txt", "w");
    if (!fp) {
        cout << "Error: Cannot create file.\n";
        return;
    }

    char str[100];
    cout << "Enter text to write to the file (max 100 characters): ";
    cin.ignore(); 
    cin.getline(str, 100);

    for (int i = 0; i < strlen(str); i++) {
        putc(str[i], fp);
    }

    cout << "Data written to file successfully.\n";
    fclose(fp);
}


void readFile() {
    FILE *fp;
    fp = fopen("example2.txt", "r");
    if (!fp) {
        cout << "Error: Cannot open file for reading.\n";
        return;
    }

    cout << "File contents:\n";
    int c;
    while ((c = getc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
}


void appendToFile() {
    FILE *fp;
    fp = fopen("example2.txt", "a");
    if (!fp) {
        cout << "Error: Cannot open file for appending.\n";
        return;
    }

    char str[100];
    cout << "Enter text to append to the file (max 100 characters): ";
    cin.ignore(); 
    cin.getline(str, 100);

    putc('\n', fp); 
    for (int i = 0; i < strlen(str); i++) {
        putc(str[i], fp);
    }

    cout << "Data appended to file successfully.\n";
    fclose(fp);
}


void writeFormattedData() {
    FILE *fp;
    fp = fopen("formatted.txt", "w");
    if (!fp) {
        cout << "Error: Cannot create file.\n";
        return;
    }

    char name[50];
    int age;
    float salary;

    cout << "Enter name: ";
    cin.ignore(); 
    cin.getline(name, 50);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;

    fprintf(fp, "Name: %s\nAge: %d\nSalary: %.2f\n", name, age, salary);

    cout << "Formatted data written to file successfully.\n";
    fclose(fp);
}


void exitProgram() {
    cout << "Exiting the program. Goodbye!\n";
}
