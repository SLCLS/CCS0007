#include <iostream>
using namespace std;

class Vehicle{
public:
	void run() {
		cout <<"Running...."<<endl;
	}
};

class Car : public Vehicle {
public:
	void drive() {
		cout<<"Driving...."<<endl;
	}
};

class SportsCar : public Car {
public:
	void race(){
		cout <<"Racing...."<<endl;
	}
};


int main() {
	SportsCar sc;
	sc.run();
	sc.drive();
	sc.race();
	return 0;
}