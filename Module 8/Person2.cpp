//Basic OOP 
#include <iostream>
using namespace std;

class Person2{
private:
	string name;
	int age;
public:
	//setter
	void setName(){
		cout << "Enter name: ";
		cin >> name;
	}
	//getter
	string getName(){
		return name;
	}
	
	//setter
	void setAge(){
		cout << "Enter age: ";
		cin >> age;
	}
	//getter
	int getAge(){
		return age;
	}
	
};

int main(){
	Person2 p;
	p.setName();
	p.setAge();
	
	cout << "Name: " << p.getName() << endl;
	cout << "Age: " << p.getAge() <<endl;
	
	return 0;
}