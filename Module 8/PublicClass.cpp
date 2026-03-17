#include <iostream>
using namespace std;

class PublicClass{
public:
	int x#include <iostream>
	using namespace std;
	
	class PrivateClass{
	private:
		int x;
	public:
		//getter and setter
		void setX(int value){
			x = value; //x=100;
		}
		void display(){
			cout << "Value of x: " <<x<<endl;
		}
	};
	
	
	int main() {
		PrivateClass obj;
		int value;
		cout << "Enter value of x: ";
		cin >> value; //100
		obj.setX(value); //store 100 
		obj.display();
		return 0;
	};
	void display(){
		cout << "Value of x: " <<x<<endl;
	}
};

int main() {
	PublicClass obj;
	cout << "Enter value of x: ";
	cin >> obj.x;
	obj.display();
	return 0;
}