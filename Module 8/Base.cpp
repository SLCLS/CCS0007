//protected
#include <iostream>
using namespace std;

class Base {
protected:
	int x;
public:
	void setX(int value) {
		x = value;
	}
};

class Derived: public Base {
public:
	void display(){
		cout << "Value of x "<<x<<endl;
	}
};

int main() {
	Derived obj;
	obj.setX(100);
	obj.display();
}
