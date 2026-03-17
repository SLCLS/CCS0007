#include <iostream>
using namespace std;

class InlineClass {
public:
	int x;
	void display(){
		cout << "Value of x is "<<x<<endl;
	}
};

int main() {
	InlineClass obj;
	obj.x = 10;
	obj.display();
	return 0;
}