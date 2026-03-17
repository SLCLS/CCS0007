//Basic OOP 
#include <iostream>
using namespace std;

class Person{
	//variables -> member data
	//function -> member functions (methods)
	//name(string), age(int) 
public:
	string name;
	int age;
};

int main(){
	Person p1,p2;
	p1.name = "Hadji";
	p1.age = 26;
	p2.name = "James";
	p2.age = 15;
	
	cout << p1.name << " is " << p1.age << " years old" <<endl;
	cout << p2.name << " is " << p2.age << " years old" <<endl;

	
	return 0;
}