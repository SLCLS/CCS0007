
### **1. Classes and Objects**
A **class** is a blueprint for creating objects. An **object** is an instance of a class.

#### Example 1: Simple Class
```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.displayBrand();
    return 0;
}
```

#### Example 2: Multiple Objects
```cpp
class Rectangle {
public:
    int width, height;
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect1, rect2;
    rect1.width = 5; rect1.height = 10;
    rect2.width = 3; rect2.height = 7;
    cout << "Area of rect1: " << rect1.area() << endl;
    cout << "Area of rect2: " << rect2.area() << endl;
    return 0;
}
```

#### Example 3: Constructor
```cpp
class Person {
public:
    string name;
    int age;
    Person(string n, int a) : name(n), age(a) {}
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("Alice", 25);
    p1.displayInfo();
    return 0;
}
```

#### Example 4: Default Constructor
```cpp
class Circle {
public:
    double radius;
    Circle() : radius(1.0) {} // Default constructor
    double getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c1;
    cout << "Circle Area: " << c1.getArea() << endl;
    return 0;
}
```

#### Example 5: Private Members
```cpp
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
    }
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
```

---

### **2. Encapsulation**
Encapsulation is the bundling of data (attributes) and methods (functions) that operate on the data into a single unit (class). Access to the data is controlled using access specifiers (`private`, `protected`, `public`).

#### Example 1: Private Data with Public Getters/Setters
```cpp
class Employee {
private:
    string name;
    int salary;
public:
    void setName(string n) { name = n; }
    string getName() { return name; }
    void setSalary(int s) { salary = s; }
    int getSalary() { return salary; }
};

int main() {
    Employee emp;
    emp.setName("John");
    emp.setSalary(50000);
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;
    return 0;
}
```

#### Example 2: Read-Only Property
```cpp
class Temperature {
private:
    double celsius;
public:
    Temperature(double temp) : celsius(temp) {}
    double getCelsius() { return celsius; }
    void setCelsius(double temp) { celsius = temp; }
    double getFahrenheit() { return (celsius * 9 / 5) + 32; }
};

int main() {
    Temperature t(25);
    cout << "Celsius: " << t.getCelsius() << endl;
    cout << "Fahrenheit: " << t.getFahrenheit() << endl;
    return 0;
}
```

#### Example 3: Protected Members
```cpp
class Animal {
protected:
    string name;
public:
    Animal(string n) : name(n) {}
    void displayName() {
        cout << "Animal Name: " << name << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}
};

int main() {
    Dog d("Buddy");
    d.displayName();
    return 0;
}
```

#### Example 4: Encapsulated Counter
```cpp
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void increment() { count++; }
    void decrement() { count--; }
    int getCount() { return count; }
};

int main() {
    Counter c;
    c.increment();
    c.increment();
    cout << "Count: " << c.getCount() << endl;
    return 0;
}
```

#### Example 5: Encapsulation with Validation
```cpp
class Student {
private:
    int id;
    string name;
public:
    void setId(int i) {
        if (i > 0) id = i;
        else cout << "Invalid ID" << endl;
    }
    int getId() { return id; }
    void setName(string n) { name = n; }
    string getName() { return name; }
};

int main() {
    Student s;
    s.setId(-5); // Invalid ID
    s.setId(101);
    s.setName("Alice");
    cout << "ID: " << s.getId() << ", Name: " << s.getName() << endl;
    return 0;
}
```

---

### **3. Inheritance**
Inheritance allows one class (derived class) to inherit attributes and methods from another class (base class).

#### Example 1: Single Inheritance
```cpp
class Vehicle {
public:
    void start() { cout << "Vehicle started." << endl; }
};

class Car : public Vehicle {
public:
    void drive() { cout << "Car is driving." << endl; }
};

int main() {
    Car myCar;
    myCar.start();
    myCar.drive();
    return 0;
}
```

#### Example 2: Multilevel Inheritance
```cpp
class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Mammal : public Animal {
public:
    void breathe() { cout << "Breathing..." << endl; }
};

class Dog : public Mammal {
public:
    void bark() { cout << "Barking..." << endl; }
};

int main() {
    Dog d;
    d.eat();
    d.breathe();
    d.bark();
    return 0;
}
```

#### Example 3: Hierarchical Inheritance
```cpp
class Shape {
public:
    void draw() { cout << "Drawing shape..." << endl; }
};

class Circle : public Shape {
public:
    void drawCircle() { cout << "Drawing circle..." << endl; }
};

class Rectangle : public Shape {
public:
    void drawRectangle() { cout << "Drawing rectangle..." << endl; }
};

int main() {
    Circle c;
    Rectangle r;
    c.draw();
    c.drawCircle();
    r.draw();
    r.drawRectangle();
    return 0;
}
```

#### Example 4: Multiple Inheritance
```cpp
class A {
public:
    void methodA() { cout << "Method A" << endl; }
};

class B {
public:
    void methodB() { cout << "Method B" << endl; }
};

class C : public A, public B {
public:
    void methodC() { cout << "Method C" << endl; }
};

int main() {
    C obj;
    obj.methodA();
    obj.methodB();
    obj.methodC();
    return 0;
}
```

#### Example 5: Virtual Base Class
```cpp
class Base {
public:
    void show() { cout << "Base class" << endl; }
};

class Derived1 : virtual public Base {};
class Derived2 : virtual public Base {};

class Final : public Derived1, public Derived2 {};

int main() {
    Final f;
    f.show(); // No ambiguity due to virtual inheritance
    return 0;
}
```

---

### **4. Polymorphism**
Polymorphism allows objects of different classes to be treated as objects of a common base class.

#### Example 1: Function Overloading
```cpp
class Math {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
};

int main() {
    Math m;
    cout << "Add Integers: " << m.add(5, 10) << endl;
    cout << "Add Doubles: " << m.add(3.5, 2.5) << endl;
    return 0;
}
```

#### Example 2: Operator Overloading
```cpp
class Complex {
public:
    double real, imag;
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator+(Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
```

With User Input

### **1. Classes and Objects**
#### Example: User Input for a Car's Brand
```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car myCar;
    cout << "Enter car brand: ";
    getline(cin, myCar.brand); // Accepts user input
    myCar.displayBrand();
    return 0;
}
```

#### Example: User Input for Rectangle Dimensions
```cpp
#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    cout << "Enter width: ";
    cin >> rect.width;
    cout << "Enter height: ";
    cin >> rect.height;
    cout << "Area: " << rect.area() << endl;
    return 0;
}
```

#### Example: User Input for Person's Name and Age
```cpp
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p;
    cout << "Enter name: ";
    cin.ignore(); // Clear buffer
    getline(cin, p.name);
    cout << "Enter age: ";
    cin >> p.age;
    p.displayInfo();
    return 0;
}
```

---

### **2. Encapsulation**
#### Example: User Input for Bank Account Operations
```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient funds!" << endl;
    }
    double getBalance() { return balance; }
};

int main() {
    double initialBalance, amount;
    cout << "Enter initial balance: ";
    cin >> initialBalance;
    BankAccount acc(initialBalance);

    cout << "Enter amount to deposit: ";
    cin >> amount;
    acc.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    acc.withdraw(amount);

    cout << "Current Balance: " << acc.getBalance() << endl;
    return 0;
}
```

#### Example: User Input for Temperature Conversion
```cpp
#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
public:
    void setCelsius(double temp) { celsius = temp; }
    double getCelsius() { return celsius; }
    double getFahrenheit() { return (celsius * 9 / 5) + 32; }
};

int main() {
    Temperature t;
    double temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    t.setCelsius(temp);
    cout << "Temperature in Fahrenheit: " << t.getFahrenheit() << endl;
    return 0;
}
```

---

### **3. Inheritance**
#### Example: User Input for Vehicle Type
```cpp
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() { cout << "Vehicle started." << endl; }
};

class Car : public Vehicle {
public:
    void start() override { cout << "Car started." << endl; }
};

class Bike : public Vehicle {
public:
    void start() override { cout << "Bike started." << endl; }
};

int main() {
    int choice;
    cout << "Choose vehicle type (1 for Car, 2 for Bike): ";
    cin >> choice;

    Vehicle *v;
    if (choice == 1) v = new Car();
    else if (choice == 2) v = new Bike();
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    v->start();
    delete v;
    return 0;
}
```

#### Example: User Input for Animal Sound
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal makes a sound." << endl; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Dog barks." << endl; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Cat meows." << endl; }
};

int main() {
    int choice;
    cout << "Choose animal (1 for Dog, 2 for Cat): ";
    cin >> choice;

    Animal *a;
    if (choice == 1) a = new Dog();
    else if (choice == 2) a = new Cat();
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    a->sound();
    delete a;
    return 0;
}
```

---

### **4. Polymorphism**
#### Example: User Input for Shape Drawing
```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; 
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing circle." << endl; }
};

class Square : public Shape {
public:
    void draw() override { cout << "Drawing square." << endl; }
};

int main() {
    int choice;
    cout << "Choose shape (1 for Circle, 2 for Square): ";
    cin >> choice;

    Shape *s;
    if (choice == 1) s = new Circle();
    else if (choice == 2) s = new Square();
    else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    s->draw();
    delete s;
    return 0;
}
```

### **1. Arrays with OOP**
#### Example 1: Managing Student Grades Using an Array
```cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int grades[5]; 
    public:
    void input() {
        cout << "Enter student name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter 5 grades: ";
        for (int i = 0; i < 5; i++) {
            cin >> grades[i];
        }
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Grades: ";
        for (int i = 0; i < 5; i++) {
            cout << grades[i] << " ";
        }
        cout << endl;
    }

    double calculateAverage() {
        double sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += grades[i];
        }
        return sum / 5;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    cout << "Average Grade: " << s.calculateAverage() << endl;
    return 0;
}
```

#### Example 2: Managing Multiple Employees Using an Array of Objects
```cpp
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
public:
    void input() {
        cout << "Enter employee name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee employees[n]; 
    for (int i = 0; i < n; i++) {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        employees[i].input();
    }

    cout << "\nEmployee Details:" << endl;
    for (int i = 0; i < n; i++) {
        employees[i].display();
    }
    return 0;
}
```

---

### **2. File Handling with OOP**
#### Example 1: Writing and Reading Student Data to/from a File
```cpp
#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
public:
    void input() {
        cout << "Enter student name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void saveToFile() {
        ofstream file("students.txt", ios::app);
        if (file.is_open()) {
            file << name << " " << rollNo << endl;
            file.close();
            cout << "Data saved to file." << endl;
        } else {
            cout << "Error opening file!" << endl;
        }
    }

    static void readFromFile() {
        ifstream file("students.txt");
        if (file.is_open()) {
            string name;
            int rollNo;
            cout << "\nStudent Records:" << endl;
            while (file >> name >> rollNo) {
                cout << "Name: " << name << ", Roll No: " << rollNo << endl;
            }
            file.close();
        } else {
            cout << "Error opening file!" << endl;
        }
    }
};

int main() {
    Student s;
    s.input();
    s.saveToFile();

    Student::readFromFile(); 
    return 0;
}
```

#### Example 2: Managing Inventory Using File Handling and Arrays
```cpp
#include <iostream>
#include <fstream>
using namespace std;

class Inventory {
private:
    string items[10]; 
    int quantities[10]; 
    int count; 
public:
    Inventory() : count(0) {}

    void addItem() {
        if (count >= 10) {
            cout << "Inventory full!" << endl;
            return;
        }
        cout << "Enter item name: ";
        cin.ignore();
        getline(cin, items[count]);
        cout << "Enter quantity: ";
        cin >> quantities[count];
        count++;
    }

    void saveToFile() {
        ofstream file("inventory.txt");
        if (file.is_open()) {
            for (int i = 0; i < count; i++) {
                file << items[i] << " " << quantities[i] << endl;
            }
            file.close();
            cout << "Inventory saved to file." << endl;
        } else {
            cout << "Error opening file!" << endl;
        }
    }

    void loadFromFile() {
        ifstream file("inventory.txt");
        if (file.is_open()) {
            count = 0;
            while (file >> items[count] >> quantities[count]) {
                count++;
            }
            file.close();
            cout << "Inventory loaded from file." << endl;
        } else {
            cout << "Error opening file!" << endl;
        }
    }

    void display() {
        cout << "\nInventory:" << endl;
        for (int i = 0; i < count; i++) {
            cout << "Item: " << items[i] << ", Quantity: " << quantities[i] << endl;
        }
    }
};

int main() {
    Inventory inventory;
    int choice;

    do {
        cout << "\n1. Add Item\n2. Save to File\n3. Load from File\n4. Display Inventory\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inventory.addItem();
                break;
            case 2:
                inventory.saveToFile();
                break;
            case 3:
                inventory.loadFromFile();
                break;
            case 4:
                inventory.display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
```

---
