#include <iostream>
using namespace std;

class ParamClass {
public:
	void add(int a,int b){
		cout << "Sum is " << a+b <<endl;
	}
	int multiply(int a, int b){
		return a*b;
	}
};

int main() {
	
	ParamClass obj;
	obj.add(10,20);
	cout << "Product is "<<obj.multiply(5,4)<<endl;
	return 0;
	
	
}