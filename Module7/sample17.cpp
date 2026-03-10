#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream fin;
	fin.open("sample6.txt");
	char name[30];
	char course[10];
	char cn[15];
	
	fin.getline(name,30);
	fin.getline(course,10);
	fin.getline(cn,15);
	
	cout << "Display Record\n";
	cout << "Name: " << name << endl;
	cout << "Course: " << course << endl;
	cout << "CN: " << cn << endl;
	
	fin.close();
	return 0;
}
