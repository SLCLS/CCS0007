#include <iostream>
using namespace std;

class OutsideClass {
public:
	int x;
	void display();
};

void OutsideClass::display(){
	cout << "Value of x is "<<x<<endl;
}

int main() {
	OutsideClass obj;
	obj.x = 100;
	obj.display();
	return 0;
}