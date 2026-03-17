#include <iostream>
using namespace std;

class Car2{
public:
	string brand;
	string model;
	int year;
};


int main() {
	
	Car2 ca1, ca2;
	
	cout << "\nEnter Car details for Car1"<<endl;
	cout << "Brand: ";
	cin >> ca1.brand;
	cout << "Model: ";
	cin >> ca1.model;
	cout << "Year: ";
	cin >> ca1.year;
	
	cout << "\nEnter Car details for Car1"<<endl;
	cout << "Brand: ";
	cin >> ca2.brand;
	cout << "Model: ";
	cin >> ca2.model;
	cout << "Year: ";
	cin >> ca2.year;
	
	
	cout << ca1.brand << " " << ca1.model << " " << ca1.year << endl;
	cout << ca2.brand << " " << ca2.model << " " << ca2.year << endl;
	return 0;
}